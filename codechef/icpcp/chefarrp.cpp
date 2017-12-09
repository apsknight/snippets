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
		ll n;
		cin >> n;

		ll a[n];
		ll dp[n+1];
		ll pd[n+1];
		rep(i, n) {
			cin >> a[i];
		}
		dp[0] = 0;
		dp[1] = a[0];
		pd[0] = 1;
		pd[1] = a[0];

		fogg(i, 1, n+1) {
			dp[i] = dp[i-1] + a[i-1];
			pd[i] = pd[i-1]*a[i-1];
		}
		ll ans = 0;
		// rep(i, n+1) {
		// 	cout << dp[i] << " ";
		// }
		// cout << endl;
		// rep(i, n+1) {
		// 	cout << pd[i] << " ";
		// }
		// cout << endl;
		rep(i, n) {
			fogg(j, i+1, n) {
				// cout << i << " " << j << " " << dp[i] << " " << dp[j] << " " << pd[i] << " " << pd[j] << " " << endl;
				if (dp[j] - dp[i] == pd[j] / pd[i])
					ans++;
			}
		}

		cout << ans << endl;
	}

  	return 0;
}