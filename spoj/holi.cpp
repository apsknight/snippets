/***
 *                                    _____           _                 _____ _             _     
 *      /\                           |  __ \         | |               / ____(_)           | |    
 *     /  \   _ __ ___   __ _ _ __   | |__) | __ __ _| |_ __ _ _ __   | (___  _ _ __   __ _| |__  
 *    / /\ \ | '_ ` _ \ / _` | '_ \  |  ___/ '__/ _` | __/ _` | '_ \   \___ \| | '_ \ / _` | '_ \ 
 *   / ____ \| | | | | | (_| | | | | | |   | | | (_| | || (_| | |_) |  ____) | | | | | (_| | | | |
 *  /_/    \_\_| |_| |_|\__,_|_| |_| |_|   |_|  \__,_|\__\__,_| .__/  |_____/|_|_| |_|\__, |_| |_|
 *  @apsknight, </www.amanpratapsingh.in>                     | |                      __/ |      
 *  Indian Institute of Techology Bhubaneswar                 |_|                     |___/       
 */
 
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string st;
typedef vector<int> vi;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define fogg(i,a,b) for(int i = (a); i <= (b); ++i)
#define ford(i,a,b) for(int i = (a); i >= (b); --i)
#define test int t; cin >> t; while(t--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mxx 1e6+7

void dfs1(int s, int e, int* count, vector<pair<int,int>> adj[]) {
	vector<pair<int,int>>::iterator it;
	count[s] = 1;
	// debug(s);
	for(it = adj[s].begin(); it != adj[s].end(); it++) {
		if (it->first == e)
            continue;
		dfs1(it->first, s, count, adj);
		count[s] += count[it->first];
	}
}

int ans = 0;
void dfs(int s, int e, int n, int* count, vector<pair<int,int>> adj[]) {
	vector<pair<int,int>>::iterator it;
	// debug(s);
	for(it = adj[s].begin(); it != adj[s].end(); it++) {
		if (it->first == e)
            continue;
        // debug(count[it->first]);
        // debug(it->second);
		dfs(it->first, s, n, count, adj);
		ans += 2*min(count[it->first], n-count[it->first])*(it->second);
		// debug(ans);
	}
}

int main() {
	off;
	test {
		int n;
		cin >> n;
		vector<pair<int,int>> adj[n+1];
		int count[n+1];
		rep(i, n-1) {
			int x, y, z;
			cin >> x >> y >> z;
			adj[x].push_back(make_pair(y, z));
			adj[y].push_back(make_pair(x, z));
		}
		dfs1(1, 0, count, adj);
		dfs(1, 0, n, count, adj);
		cout << ans << endl;
	}

  	return 0;
}