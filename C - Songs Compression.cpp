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
unordered_map<ll, ll >mp;
struct Compare {
	bool operator()(pair<int, int> const & a, pair<int, int> const & b) const
	{
		if (a.first == b.first)return a.second < b.second;
		else return a.first > b.first;
	}
}obj;
ll a, b, m;
int main(){
	Wal3a;
	ll cost;
	cin >> n >> cost;
	vector<ll>vp;
	ll sum = 0;
	while (n--){
		cin >> x >> y;
		sum += x;
		vp.push_back(x-y);
	}
	sort(vp.rbegin(), vp.rend());
	int i = 0;
	if (sum <= cost){
		cout << 0 << nl;
		return 0;
	}
	while (i != vp.size()){
		sum -= vp[i];
		if (sum <= cost){
			cout << i + 1 << nl;
			return 0;
		}
		i++;
		
	}
	cout << -1 << nl;
}