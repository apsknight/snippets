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
		int n;
		cin >> n;
		int a[n];

		rep(i, n) {
			cin >> a[i];
		}

		int ans = 0;
		int sieve[100000] = {0};
		rep(i, n) {
			for (int j = 2; j <= sqrt(a[i]); j++) {
				if (a[i] % j == 0) {
					if (j != sqrt(a[i])) sieve[j]+=2, sieve[a[i] / j]+=2;
					else sieve[j]+=2;
				}
				sieve[a[i]]++;
			}
		}

		rep(i, 100000) {
			if (sieve[i] != 0) cout << i << " " << sieve[i] << endl;
			ans += sieve[i];
		}

		cout << ans + 1 << endl;
	}

  	return 0;
}