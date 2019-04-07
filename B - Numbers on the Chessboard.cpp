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
ll OO = 0x3f3f3f3f3f3f3f3f;
ll x, y, z;
ll maxi = 0, k, n, ko,m,q;
//unordered_map<ll, ll >mp;
bool valid(int i, int j){
	return (i >= 0 && i < n && j >= 0 && j < m );
}
ll nceil(ll a, ll b){
	ll ret = a / b;
	if (a%b != 0)return ret + 1;
	return ret;
}
void check(ll o, ll p){
		if (o % 2 == 0&&n%2==0){
			ll res = n*(o - 1) + p;
			(res % 2 == 0) ? cout << res / 2 << nl : cout << nceil(res , 2) + nceil(n*n , 2) << nl;
		}
		else{
			ll res = n*(o - 1) + p;
			(res % 2 != 0) ? cout <<nceil(res , 2)  << nl : cout << (res / 2)+ nceil(n*n,2)  << nl;
		}
}
int main(){
	Wal3a;
	cin >> n >> q;
	while (q--){
		ll a, b;
		cin >> a >> b;
		check(a, b);
	}
	
}