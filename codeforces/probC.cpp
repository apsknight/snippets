/**
*	Aman Pratap Singh (@apsknight, </www.amanpratapsingh.in>)
*	Indian Institute of Technology Bhubaneswar 
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string st;
typedef vector<int> vi;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define fogg(i,a,b) for(int i = (a); i <= (b); ++i)
#define ford(i,a,b) for(int i = (a); i >= (b); --i)
#define test int tes; cin >> tes; while(tes--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD (long long)10000000007
const int INF = 0x3f3f3f3f;

ll dfs (int i, vector<int> g[], bool* visited, ll* a) {
	if (visited[i]) return 0;
	visited[i] = true;
	ll ans = a[i-1];
	for (int j = 0; j < g[i].size(); j++) {
		debug(j);
		debug(g[i][j]);
		debug(ans);
		if (!visited[g[i][j]]) ans = min(dfs(g[i][j], g, visited, a), ans);
		debug(ans);
	}

	return ans;
}	
int main() {
	off;
	ll n, m;
	cin >> n >> m;
	ll a[n];

	rep(i, n) {
		cin >> a[i];
	}
	bool visited[n] = {false};

	vector<int> g[n+1];
	rep(i, m) {
		int t1, t2;
		cin >> t1 >> t2;
		g[t1].push_back(t2);
		g[t2].push_back(t1);
	}
	ll ans = 0;
	fogg(i, 1, n) {
		ans += dfs(i, g, visited, a);
		debug(i);
		debug(ans);
	}

	cout << ans << endl;
  	return 0;
}