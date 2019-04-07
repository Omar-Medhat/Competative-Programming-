#include bitsstdc++.h
#includeunordered_map
#pragma GCC optimize (O3)
#pragma comment(linker, STACK936777216)
#ifdef _MSC_VER
#  include intrin.h
#  define __builtin_popcount __popcnt
#endif
using namespace std;
#define EPS 1E-9
#define ll long long
#define ull unsigned long long
#define Wal3a iossync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Wal3aBzyada iossync_with_stdio(0);cin.tie(0);cout.tie(0);freopen(input.txt, r, stdin);freopen(output.txt, w, stdout);
#define MOD (ll)1e9+7
#define nl 'n'
 fflush(stdout);  cout  flush;
int OO = 0x3f3f3f3f;
const int MAX = 100000000;
char vis[MAX  8 + 1];
void setVisited(int i) {
	vis[i  3] = (1  (i & 7));
}
bool isVisited(int i) {
	return vis[i  3] & (1  (i & 7));
}
int arr[2000005];
int n, a;
int main(){
	Wal3a;
	cin  n;
	string s1, s2;
	cin  s1  s2;
	ll cost = 0;
	for (int i = 0; i  s1.size(); i++){
		if (s1[i] != s2[i]){
			if (i  s1.size() && s1[i + 1] == s2[i] && s2[i + 1] == s1[i]){
				swap(s1[i], s1[i + 1]);
				cost += 1;
			}
			else if (s1[i] != s2[i]){
				cost += 1;
				if (s1[i] == '0')s1[i] = '1';
				else s1[i] = '0';
			}
		}
	}
	cout  cost  nl;
}