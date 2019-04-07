#include <bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
#define ll long long
#define ull unsigned long long
#define Wal3a ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define Wal3aBzyada ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
#define MOD (ll)1e9+7
#define nl '\n'
ll OO = 0x3f3f3f3f3f3f3f3f;
ll x, y, z;
ll  k, n, ko, m, q;
int arr[51][51];
ll mp[51];
ll fact[11];
bool prime[10] = { 0, 0, 1, 1, 0, 1, 0, 1, 0, 0 };
int main(){
	Wal3a;
	cin >> n;
	string s, s1;
	cin >> s;
	vector<int>v;
	for (int i = 0; i < n; i++){
		if (s[i] != '1' || s[i] != '0'){
			if (!prime[s[i] - '0']){
				if (s[i] - '0' == 4){
					s1 += '2';
					s1 += '2';
					s1 += '3';
				}
				if (s[i] - '0' == 8){
					s1 += '2';
					s1 += '2';
					s1 += '2';
					s1 += '7';
				}
				if (s[i] - '0' == 6){
					s1 += '3';
					s1 += '5';
				}
				if (s[i] - '0' == 9){
					s1 += '3';
					s1 += '3';
					s1 += '2';
					s1 += '7';
				}
			}
			else s1 += (s[i]);
		}
	}
	sort(s1.rbegin(), s1.rend());
	cout << s1 << nl;
}