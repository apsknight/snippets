/**
*	Aman Pratap Singh (@apsknight, </www.apsknight.cf>)
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
#define test int t; cin >> t; for(int te = 1; te <= t; te++)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define maxx 1e6+7

int main() {
	off;
	test {
		ll n;
		cin >> n;

		ll a[10007];
		ll dp[10007];


		rep(i, n) {
			cin >> a[i];
		}

		dp[0] = a[0];
		dp[1] = a[1];
		fogg(i, 2, n-1) {
			dp[i] = a[i] + max(dp[i-2], dp[i-3]);
		}
		
		// rep(i, n) {
			// debug(dp[i]);
		// }
		cout << "Case " << te << ": " << max(dp[n-1], dp[n-2]) << endl;

	}

  	return 0;
}