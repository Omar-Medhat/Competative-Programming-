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
vector<int>G[52];
bool valid(char c){
	if (c == '.' || c == ',' || c == '?' || c == '!')return 1;
	return 0;
}
int main(){
	Wal3a;
	string str, s;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++){
		if ((i == 0 || i == str.size() - 1) && str[i] == ' ')continue;
		if (str[i] == ' '){
			s += str[i];
			while (str[i] == ' ')i++;
			--i;
		}
		else 	s += str[i];
	}
	for (int i = 0; i < s.size(); i++){
		if (s[i] == ' '&&valid(s[i + 1]))continue;
		else if (valid(s[i])&&s[i + 1] != ' '){
			cout << s[i] << ' ';
		}
		else cout << s[i];
	}
	cout << nl;
}