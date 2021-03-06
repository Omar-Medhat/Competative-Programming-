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
/*
clock_t t;
t = clock();
solve();
t = clock() - t;
double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
*/
int OO = 0x3f3f3f3f;
unordered_map<ll, int>mp;
vector<ll>v;
void solve(ull n, int cnt = 0) {
	if (cnt > 3 || n > (ll)1e18)return;
	if (!mp[n] && n) {
		mp[n] = 1;
		v.push_back(n);
	}
	for (int i = 0; i <= 9; i++) {
		if (!i && !n)continue;
		solve(n * 10 + i, cnt + (i != 0));
	}
}
int main() {
	Wal3a;
	solve(0);
	sort(v.begin(), v.end());
	ll t;
	cin >> t;
	ll a, b;
	while (t--) {
		cin >> a >> b;
		int idx1 = upper_bound(v.begin(), v.end(), b) - v.begin();
		int idx2 = lower_bound(v.begin(), v.end(), a) - v.begin();
		cout << idx1 - idx2 << nl;
	}
}