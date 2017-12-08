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
	int n, m;
	cin >> n >> m;
	int a[n];

	rep(i, n) {
		cin >> a[i];
		a[i] = a[i] % m;
	}
	if (n > m) {
		cout << "Yes" << endl;
		return 0;
	}
	int dp[1024][1024] = {{0}};

	rep(i, n+1) {
		dp[i][0] = 1;
	}
	fogg(i, 1, n) {
		rep(r, m+1) {
			dp[i][r] = dp[i-1][(r + a[i-1]) % m] || dp[i-1][r];
		}
	}
	if (dp[n][m]) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
  	return 0;
}