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
#define MOD (long long)10000000007
const int INF = 0x3f3f3f3f;

int main() {
	off;
	unsigned long long dp[1000];
	dp[1] = 2;
	dp[2] = 8;
	fogg(i, 3, 499) {
		dp[i] = 4*dp[i-1] + dp[i-2];
	}
	test {
		unsigned long long n;
		cin >> n;
		unsigned long long ans = 0;
		for (int i = 1; dp[i] <= n; i++) ans += dp[i];

		cout << ans << endl;
	}

  	return 0;
}