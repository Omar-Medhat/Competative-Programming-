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
vector<ll>v1,v2;
ll cnt1, cnt2, cnt3, cnt4;
int main(){
	Wal3a;
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	ll p = s.size();
	ll D;
	ll B = k/2;
	D = B;
	for (int i = 0; i < p; i++){
			if (s[i] == '('&&B){
				cout << s[i];
				B --;
			}
			else if(s[i]==')'&&D){
				cout << s[i];
					D--;
			}
		
	}
	cout << nl;
}