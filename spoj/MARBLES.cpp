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

ll C(ll n, ll r, ll M = MOD) {
	if (r > n / 2) r = n - r;

	ll ans = 1;

	for (ll i = 1; i <= r; i++) {
		ans *= n - r + i;
		// ans %= M;
		ans /= i;
	}

	return ans;
}

int main() {
	off;
	test {
		ll n, k;
		cin >> n >> k;

		cout << C(n -k + k - 1, k - 1) << endl;
	}

  	return 0;
}