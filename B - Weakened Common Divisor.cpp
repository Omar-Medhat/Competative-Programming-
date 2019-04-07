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
#define ll long long
#define ull unsigned long long
#define Wal3a ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define Wal3aBzyada ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
#define MOD (ll)1e9+7
#define nl '\n'
// fflush(stdout);  cout << flush;
ll OO = 0x3f3f3f3f3f3f3f3f;
ll x, y, z;
ll  k, n, ko, m, q;
//unordered_map<ll, ll >mp;
bool valid(int i, int j){
	return (i >= 0 && i < n && j >= 0 && j < m);
}
unordered_map<int, int>mp;
int H = 0;

unordered_set<int> factor;
void getFactor(int n){
	for (int i = 2; i <= n / i; ++i){
		if (n%i == 0)factor.insert(i);
		while (n % i == 0){
			mp[i] |= 1;
			n /= i;
		}
	}if (n != 1){
		mp[n] |= 1;
		factor.insert(n);
	}
}
ll maxi = 0;
int main(){
	Wal3a;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x >> y;
		if (!i){
			getFactor(x);
			getFactor(y);
		}
		else{
			for (auto a : factor){
				if (x%a == 0)mp[a] += 1;
				else if (y%a == 0)mp[a] += 1;

			}
		}
	}
	for (auto ptr : mp){
		if (ptr.first != 1){
			if (ptr.second == n){
				cout << ptr.first << nl;
				return 0;
			}
		}
	}
	cout << -1 << nl;
}