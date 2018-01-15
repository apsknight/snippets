/***
 *	Aman Pratap Singh (www.amanpratapsingh.in)
 *	Indian Institute of Technology Bhubaneswar
 */
// Copied from the codeforces submission of partition problem
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef string st;
typedef vector<ll> vi;
#define rep(i, n) for(ll i = 0; i < n; ++i)
#define fogg(i,a,b) for(ll i = (a); i <= (b); ++i)
#define ford(i,a,b) for(ll i = (a); i >= (b); --i)
#define test ll t; cin >> t; while(t--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mxx 1e6+7
 
int main() {
	off;
	test {
		ll x, n;
		cin >> x >> n;
		// ll g1 = 1, g2 = 0;
		// vi a;
		ll a[n+1];
		memset(a, 0, sizeof a);
		a[x] = 2;
		// debug(x);
		// debug(a[x]);
			ll flag=0;
		if ((((n*(n+1)) / 2) - x)% 2 == 0 && n > 2) {
			// cout << 0 << endl;
			ll req = (((n*(n+1)) / 2) - x) / 2;
			// debug(req);
			ll cnt = n;
			if (cnt == x) cnt--;
		
			while(cnt>=0) {
				if(req==0){
					flag=1;
					break;
				}
				  	if (cnt == x) {
					  cnt--;
					  continue;
				}
				if((req-cnt)!=x && (req-cnt)>=0){
					req -= cnt;
					// a.push_back(cnt);
					a[cnt] = 1;
					cnt--;	
					continue;
				}
				cnt--;
			}
		}
          if(flag==1){
			fogg(i, 1, n) {
				cout << a[i];
			}
			cout << endl;
		}
		else {
			cout << "impossible" << endl;
			// cout << 1 << endl;
			// ll req = ((n*(n+1)) / 2) / 2;
			// // debug(req);
			// ll cnt = n;
			// while(req >= 1) {
			// 	if (req >= cnt) {
			// 		req -= cnt;
			// 		a.push_back(cnt);
			// 		cnt--;
			// 	}
			// 	else {
			// 		a.push_back(req);
			// 		req -= req;
			// 	}
			// }
		}
		// fogg(i, 2, n) {
		// 	if (g1 > g2) g2 += i;
		// 	else g1 += i;
		// }
		// cout << a.size() << " ";
		// rep(i, a.size()) {
		// 	cout << a[i] << " ";
		// }
		// cout << endl;
		// cout << abs(g1-g2) << endl;
	}
  	return 0;
}  