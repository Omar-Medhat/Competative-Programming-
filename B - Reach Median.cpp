#include <bits/stdc++.h>
#include<unordered_map>
#pragma GCC optimize ("O3")
#pragma comment(linker, "/STACK:936777216")
#ifdef _MSC_VER
#  include <intrin.h>
#  define __builtin_popcount __popcnt
#endif
using namespace std;
#define EPS 1E-9
#define ll long long
#define ull unsigned long long
#define Wal3a ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Wal3aBzyada ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define MOD (ll)1e9+7
#define nl '\n'
// fflush(stdout);  cout << flush;
int OO = 0x3f3f3f3f;
const int MAX = 100000000;
char vis[MAX / 8 + 1];
void setVisited(int i) {
	vis[i >> 3] |= (1 << (i & 7));
}
bool isVisited(int i) {
	return vis[i >> 3] & (1 << (i & 7));
}
int arr[2000005];
int n, a,m;
int main(){
	Wal3a;
	cin >> n >> a;
	m = n;
	for (int i = 0; i < n; i++)cin >> arr[i];
	sort(arr, arr + n);
	ll k = (n / 2),sum=0;
	if (arr[k] > a){
		k = 0;
		n = (n / 2)+1;
	}
	for (int i = k; i < n; i++){
		if (i>(m/ 2) && arr[i] > a)continue;
		if (i<(m/ 2) && arr[i] < a)continue;
		sum += abs(a - arr[i]);
	}
	cout << sum << nl;
}