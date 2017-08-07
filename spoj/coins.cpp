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


map< int, ll > dp;

ll foo(int n) {
	if (n == 0)
		return 0;
	if (dp[n] != 0)
		return dp[n];

	// debug('a');
	ll ctr = foo(n/2) + foo(n/3) + foo(n/4);

	// debug(ctr);
	if (ctr > n)
		dp[n] = ctr;
	else
		dp[n] = n;

	return dp[n];
}

int main() {
	// off;
	int n;

	while(scanf("%d",&n)==1) 
		cout << foo(n) << endl;

	// cout << foo(12);

  	return 0;
}