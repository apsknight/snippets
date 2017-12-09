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
#define MOD (long long)1000000007
const int INF = 0x3f3f3f3f;

int main() {
	// off;
	test {
		int x, y, z, a, b, c;
		cin >> x >> y >> z >> a >> b >> c;
        int m = max(x, max(y, z));
        m++;
        vector<vector<vector<unsigned short int> > > dp (m,vector<vector<unsigned short int> >(m,vector <unsigned short int>(m)));
        m--;
		rep(i, m+1) {
			dp[i][0][0] = i*a;
			dp[0][i][0] = i*a;
			dp[0][0][i] = i*a; 
		}
 
		fogg(i, 1, m) {
			fogg(j, 1, m) {
				dp[i][j][0] = min(dp[i-1][j][0] + a, min(dp[i][j-1][0] + a, dp[i-1][j-1][0] + b));
				dp[i][0][j] = min(dp[i-1][0][j] + a, min(dp[i][0][j-1] + a, dp[i-1][0][j-1] + b));
				dp[0][i][j] = min(dp[0][i-1][j] + a, min(dp[0][i][j-1] + a, dp[0][i-1][j-1] + b));
			}
		}
 
		fogg(i, 1, m) {
			fogg(j, 1, m) {
				fogg(k, 1, m) {
					dp[i][j][k] = min(min(min(dp[i-1][j][k] + a, min(dp[i][j-1][k] + a, dp[i][j][k-1] + a)), min(dp[i-1][j-1][k] + b, min(dp[i-1][j][k-1] + b, dp[i][j-1][k-1] + b))), dp[i-1][j-1][k-1] + c);
				}
			}
		}
 
		cout << dp[x][y][z] << endl;
	}
  	return 0;
} 