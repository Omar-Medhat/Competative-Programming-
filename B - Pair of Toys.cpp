#include <bits/stdc++.h>
#include<unordered_map>
#pragma GCC optimize ("O3")
#pragma comment(linker, "/STACK:936777216")
#ifdef _MSC_VER
#  include <intrin.h>
#  define __builtin_popcount __popcnt
#endif
using namespace std;
#define ll long long
#define ull unsigned long long
#define Wal3a ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define Wal3aBzyada ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
#define MOD (ll)1e9+7
#define nl '\n'
// fflush(stdout);  cout << flush;
int OO = 0x3f3f3f3f;
ll x, y, z;
ll maxi = 0, k, n, ko;
//unordered_map<ll, ll >mp;
bool valid(int i, int j){
	return (i >= 0 && i < x && j >= 0 && j < y );
}
struct Compare {
	bool operator()(pair<int, int> const & a, pair<int, int> const & b) const
	{
		if (a.first == b.first)return a.second < b.second;
		else return a.first > b.first;
	}
}obj;
ll a, b, m;
map<pair<ll, ll>, bool>mp;
int main(){
	Wal3a;
	cin >> n >> m;
	b = m - 1;
	m /= 2;
	ll k = min(min(n, m), ((n - (m + 1)) - (b <= n ? n - b : 0)) + 1);
	if (k<0)cout << 0 << nl; 
	else cout << k << nl;
}