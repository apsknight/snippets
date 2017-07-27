/**
*	Aman Pratap Singh (Github: @apsknight/snippets/)
*	16CS01011, Indian Institute of Technology Bhubaneswar 
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
#define mx 1000

int adj_matrix[mx][mx];
bool visited[mx][mx];
pair<int, int> path[mx];
int pathCounter = 0;
bool done = false;
ll n, m;

void dfs(int u, int v);

int main() {
	off;
	test {
		cin >> m >> n;

		ford(i, m-1, 0) {
			rep(j, n) {
				cin >> adj_matrix[i][j];
			}
		}

		dfs(0, 0);
		done = false;
		pathCounter = 0;
	}

  	return 0;
}

void dfs(int u, int v) {
	path[pathCounter] = make_pair(u, v);

	pathCounter++;

	if (u == m-1 && v == n-1) {
		done = true;
		rep(i, pathCounter) {
			cout << "<" << path[i].first << "," << path[i].second << ">";
		}
		cout << endl;
		return;
	}
	else if (!done) {
		if (adj_matrix[u+1][v] == 1) {
			dfs(u+1, v);
			pathCounter--;
		}

		if (adj_matrix[u][v+1] == 1) {
			dfs(u, v+1);
			pathCounter--;
		}	
	}

	return;
}
