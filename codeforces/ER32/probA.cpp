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
#define INF (int)1<<20
#define MOD (long long)10000000007

int main() {
	off;
	ll n;
	cin >> n;
	ll a[n];

	rep(i, n) {
		cin >> a[i];
	}
	ll ans = 0;
	fogg(i, 1, n-2) {
		if (a[i] > a[i-1] && a[i] > a[i+1]) ans++;
		else if (a[i] < a[i-1] && a[i] < a[i+1]) ans++;
	}

	cout << ans << endl;
  	return 0;
}