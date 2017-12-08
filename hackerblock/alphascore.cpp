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
	int n;
	cin >> n;
	int a[n];
	ll dp[n] = {0};
	rep(i, n) {
		cin >> a[i];
	}
	dp[0] = 0;
	fogg(i, 1, n-1) {
		rep(j, i) {
			if (a[j] < a[i]) dp[i] = (dp[i] % MOD + a[j] % MOD) % MOD;
		}
	}
	ll ans = 0;
	rep(i, n) {
		// cout << dp[i] << endl;
		ans = (ans % MOD + dp[i] % MOD) % MOD;
	}

	cout << ans << endl;
  	return 0;
}