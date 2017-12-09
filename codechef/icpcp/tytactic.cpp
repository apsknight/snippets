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
#define test int t; cin >> t; while(t--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mxx 100007
 
vector <int> adj[mxx];
ll arr[mxx];
ll ind[mxx];
ll a[mxx];
ll weight[mxx];
ll n, m;
ll temp;
 
void dfs(int u) {
    arr[u] = 1;
    ind[u] = ++temp;
 
    for (int i = 0; i < adj[u].size(); i++) {
        int v = adj[u][i];
        if (arr[v] == 0) {
            dfs(v);
            arr[u] += arr[v];
        }
    }
}
 
void updateTree(int index, int k) {
    while (index <= n) {
        a[index] += k;
        index += index & -index;
    }
}
 
int queryTree(int index) {
    int sum = 0;
    while (index) {
        sum += a[index];
        index -= index & -index;
    }
    return sum;
}
 
int main() {
	off;
    cin >> n >> m;

 	fogg(i, 1, n) {
 		cin >> weight[i];
 	}
 	
 	fogg(i, 1, n-1) {
 		ll u, v;
 		cin >> u >> v;
 		adj[u].push_back(v);
 		adj[v].push_back(u);
 	}

    dfs(1);
 
    fogg(i, 1, n) updateTree(ind[i], weight[i]);
 
    while (m--) {
        char c;
        cin >> c;
        if (c == 'Q') {
            ll temp;
            cin >> temp;
            cout << queryTree(ind[temp] + arr[temp] - 1) - queryTree(ind[temp] - 1) << endl;
        }
        else if (c == 'U'){
            int temp, value;
            cin >> temp >> value;
 
            updateTree(ind[temp], value - weight[temp]);
            weight[temp] = value;
        }
    }
    return 0;
}