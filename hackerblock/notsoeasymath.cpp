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

ll countBits(ll mask) {
	ll ans = 0;
	while(mask) {
		mask = mask & (mask-1);
		ans++;
	}

	return ans;
}

int main() {
	// off;
	int a[] = {2, 3, 5, 7, 11, 13, 17, 19};
	test {
		ll n;
		cin >> n;
		ll ans = 0;
		ll k = 0;
		rep(i, 9) {
			if (a[i] < n) {
				k++;
			}
		}
		fogg(i, 1, (1 << k) - 1) {
			ll mask = i;
			ll bits = countBits(mask);
			ll temp = 1;
			int idx = 0;
			while (mask) {
				if (mask & 1) {
					temp *=  a[idx];
				}
				mask = mask >> 1;
				idx++;
			}
			// debug(i);
			// debug(bits);
			// debug(temp);
			if (bits & 1) {
				ans += n / temp;
			}
			else {
				ans -= n / temp;
			}
			// debug(ans);
		}

		cout << ans << endl;
	}

  	return 0;
}