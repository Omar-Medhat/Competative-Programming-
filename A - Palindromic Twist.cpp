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
ll maxi = 0, k, n, ko,m;
//unordered_map<ll, ll >mp;
bool valid(int i, int j){
	return (i >= 0 && i < n && j >= 0 && j < m );
}
bool check(char a, char b){
	if (a == 'a'){
		if (b != 'a'&& b!='c')return 0;
	}
	else if (a == 'z'){
		if ( b != 'z'&&b!='x')return 0;
	}
	else {
		if (b != a && b != a + 2 && b!=a-2)return 0;
	}
	return 1;
}
int main(){
	Wal3a;
	string s;
	ll t;
	cin >> t;
	while (t--){
		bool b = 0;
		cin >> n;
		cin >> s;
		for (int i = 0; i < s.size() / 2; i++){
			if (check(s[i],s[n - i - 1]))continue;
			else {
				cout << "NO" << nl;
				b = 1;
				break;
			}
		}
		if(!b)cout << "YES" << nl;
	}
}