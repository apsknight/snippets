/**
*	Aman Pratap Singh (@apsknight, </www.apsknight.cf>)
*	Indian Institute of Technology Bhubaneswar 
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
#define rep(i, n) for(int i = 0; i < n; i++)
#define fogg(i,a,b) for(int i = (a); i <= (b); i++)
#define ford(i,a,b) for(int i = (a); i >= (b); i--)
#define test int t; cin >> t; while(t--)
#define input ll a[10000000]; ll n; cin >> n; rep(i, n) cin >> a[i]
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define print(x) cout << x << "\n"
#define printsl(x) cout << x << " "
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD 1e9+7

int main() {
	off;
	test {
		st s;
		cin >> s;
		int n = s.length();
		int u = 0, d = 0, ur = 0, dr = 0;
		rep(i, n) {
			if (s[i] == 'U') {
				dr = 0;
				if (ur != 1) {
					u++;
					ur++;
				}
			}
			else if (s[i] == 'D') {
				ur = 0;
				if (dr != 1) {
					d++;
					dr++;
				}
			}
		}

		print(min(u, d));
	}

  	return 0;
}