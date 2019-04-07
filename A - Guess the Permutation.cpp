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
ll mp[51], mp1[51];
vector<int>G[52];
set<int>se;
int main(){
	Wal3a;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> arr[i][j];
			mp1[arr[i][j]] = 1;
		}
	}
	vector<ll>v;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (i == j)continue;
			G[i + 1].push_back(arr[i][j]);
			G[j + 1].push_back(arr[i][j]);
		}
	}
	vector<pair<ll, ll> >bn;
	for (int i = 1; i <= n; i++){
		if (mp1[i]){
			ll maxi = 0, ind;
			for (int j = 1; j <= n; j++){
				if (!mp[j] && count(G[j].begin(), G[j].end(), i) > maxi){
					maxi = count(G[j].begin(), G[j].end(), i);
					ind = j;
				}
			}
			bn.push_back({ ind, i });
			mp[ind] = 1;
		}
	}
	for (int i = 1; i <= n; i++){
		if (!mp1[i]){
			ll maxi = 0, ind;
			for (int j = 1; j <= n; j++){
				if (!mp[j] && count(G[j].begin(), G[j].end(), i) >= maxi){
					maxi = count(G[j].begin(), G[j].end(), i);
					ind = j;
				}
			}
			bn.push_back({ ind, i });
			mp[ind] = 1;
		}
	}
	sort(bn.begin(), bn.end());
	for (auto O : bn)cout << O.second << " ";
	cout << nl;
}