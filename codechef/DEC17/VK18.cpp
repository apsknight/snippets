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

ll sum[1000007] = {0};
ll dp[1000007] = {0};
int a[2000007];

int main() {
	off;
	ll ans = 0;
	fogg(i, 1, 2000003) {
		int temp = i;
		int qw = 0;
		while(temp) {
			if ((temp%10) % 2 == 0) qw += temp % 10;
			else qw -= temp % 10;
			temp /= 10;
		}
		a[i]=abs(qw);
	}
	sum[2] = 10;
	sum[3] = 24;
	fogg(i, 4, 1000003) {
		sum[i] = sum[i-1] - 2 * a[i] + 2 * a[2*i - 1] + a[2*i - 2] + a[2*i];
	}
	dp[1] = 2;
	fogg(i, 2, 1000003) {
		dp[i] = dp[i-1] + sum[i];
	}

	test {
		int n;
		cin >> n;

		cout << dp[n%1000007] << endl;
	}
  	return 0;
}