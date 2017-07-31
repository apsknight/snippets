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
#define test int t; cin >> t; while(t--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define maxx 1e6+7

int main() {
	off;
	st s;
	cin >> s;
	int dp[5007];
	while (s != "0") {
		dp[0] = 1;
		// if (((int)((s[0]) - '0')) * 10 + ((int)((s[1]) - '0')) <= 26) {
		// 	dp[1] = 2;
		// }
		// else {
		// 	dp[1] = 1;
		// }
		int len = s.length();
		for(int i = 1; i < len; i++) {
			dp[i] = 0;

			if (s[i] != '0')
				dp[i] = dp[i-1];
			if (((int)((s[i-1]) - '0')) * 10 + ((int)((s[i]) - '0')) <= 26 && ((int)((s[i-1]) - '0')) * 10 + ((int)((s[i]) - '0')) > 9) {
				if (i == 1)
					dp[i] += 1;
				else
					dp[i] += dp[i-2];
			}
		}
		cout << dp[len-1] << endl;
		// rep(i, len) {
		// 	cout << dp[i] << " ";
		// }
		// cout << endl;
		cin >> s;
	}

  	return 0;
}