/***
 *	Aman Pratap Singh (www.amanpratapsingh.in)
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
		int n, m;
		cin >> n >> m;
		st a, b;
		cin >> a >> b;
		st p = "", q = "";
		p += a[0];
		q += b[0];
		char temp = a[0];
		fogg(i, 1, a.length()-1) {
			if (a[i] != temp) {
				p += a[i];
				temp = a[i];
			}
		}
		temp = b[0];
		fogg(i, 1, b.length()-1) {
			if (b[i] != temp) {
				q += b[i];
				temp = b[i];
			}
		}
		ll dp[p.length()+1][q.length()+1];
		rep(i, p.length()+1) {
			dp[i][0] = i;
		}
		rep(i, q.length()+1) {
			dp[0][i] = i;
		}
		
		fogg(i, 1, p.length()) {
			fogg(j, 1, q.length()) {
				if (p[i-1] == q[j-1]) {
					dp[i][j] = 1 + dp[i-1][j-1];
				}
				else {
					dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1]);
				}
			}
		}
		// debug(p);
		// debug(q);
		// rep(i, p.length()+1) {
		// 	rep(j, q.length()+1) {
		// 		cout << dp[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		cout << dp[p.length()][q.length()] << endl;
	}

  	return 0;
}