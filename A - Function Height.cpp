
#include <bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
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
#define MOD (ll)1e9+7
#define nl '\n'
// fflush(stdout);  cout << flush;
// freopen("input.in","r",stdin);
// freopen("ouput.out","w",stdout);
int OO = 0x3f3f3f3f;
/*set<int>adj[200005];
const int MAX = 1e9;
int viso[MAX / 8 + 1];
void setVisited(int i) {
viso[i >> 3] |= (1 << (i & 7));
}
bool isVisited(int i) {
return viso[i >> 3] & (1 << (i & 7));
}*/
ll n;
int main(){
	Wal3a;
	ll x, y;
	cin >> x >> y;
	cout << y / x + (y%x!=0) << nl;
}