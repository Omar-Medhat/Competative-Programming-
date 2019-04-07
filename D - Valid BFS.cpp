#include <bits/stdc++.h>
#include<unordered_map>
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
#define Wal3aBzyada ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define MOD (ll)1e9+7
#define nl '\n'
// fflush(stdout);  cout << flush;
int OO = 0x3f3f3f3f;
set<int>adj[200005];
int viso[200005 / 8 + 1];
void setVisited(int i) {
		viso[i >> 3] |= (1 << (i & 7));
}
bool isVisited(int i) {
		return viso[i >> 3] & (1 << (i & 7));
}
vector<int>vv;
ll sz,n;
int main(){
	Wal3a;
	cin >> n;
	ll a, b;
	for (int i = 0; i < n-1; i++){
		cin >> a >> b;
		--a; --b;
		adj[a].insert(b);
		adj[b].insert(a);
	}
	cin >> a;
	if (a != 1){
		cout << "NO" << nl;
		return 0;
	}
	ll o = a - 1,cnt=0,p=0;
	sz = adj[o].size();
	for (int i = 0; i < n-1; i++){
		cin >> a,--a;
		auto it = adj[o].find(a);
		if (it==adj[o].end()){
			cout << "NO" << nl;
			return 0;
		}
		else {
			cnt++;
			adj[o].erase(a);
			adj[a].erase(o);
		}
		if(adj[a].size())vv.push_back(a);
		if (cnt == sz){
			if (p >= vv.size())break;
			o = vv[p];
			sz = adj[o].size();
			++p;
			cnt = 0;
		}
	}
	cout << "YES" << nl;
}