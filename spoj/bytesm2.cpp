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
#define mxx 1e6+7

int main() {
	off;
	test {
		ll u, v;
		cin >> u >> v;
		int a[u+7][v+7];

		rep(i, u) {
			rep(j, v) {
				cin >> a[i][j];
			}
		}

		int dp[u+7][v+7];

		rep(i, v) {
			dp[0][i] = a[0][i];
			// debug(dp[0][i]);
		}

		fogg(i, 1, u-1) {
			rep(j, v) {
				if (j == 0) {
					dp[i][j] = a[i][j] + max(dp[i-1][j], dp[i-1][j+1]);
				}
				else if (j == v-1) {
					dp[i][j] = a[i][j] + max(dp[i-1][j], dp[i-1][j-1]);
				}
				else {
					dp[i][j] = a[i][j] + max(dp[i-1][j], max(dp[i-1][j+1], dp[i-1][j-1]));	
				}
			}
		}

		int res = -1;

		rep(i, v) {
			if (dp[u-1][i] > res) {
				res = dp[u-1][i]; 
			}
			
		}

		// rep(i, u) {
		// 	rep(j, v) {
		// 		cout << dp[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		cout << res << endl;
	}

  	return 0;
}