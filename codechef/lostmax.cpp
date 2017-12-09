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
#define test int t; cin >> t; for(int ri = 0; ri < t; ri++)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mxx 1e6+7

int main() {
	// off;
	test {
		ll a[57], ctr = 0;
		bool foo = true, bar = false;
		char ch;
		rep(i, 109) {
			if(i % 2 == 0) {
				cin >> a[ctr];
				cout << a[ctr] << endl;
				ctr++;
				foo = false;
				bar = true;
				continue;
			}
			else {
				cin >> ch;
				debug(ch);
				bar = false;
				foo = true;
				if (ch == 13)
					break;
			}
		}
		bool baz = false, mx = -1;
		rep(i, ctr) {
			if (baz == false && a[i] == ctr-1) {
				baz = true;
				continue;
			}
			if (isdigit(a[i])) {
				// debug(s[i]);
				if (a[i] > mx)
					mx = a[i];
				// debug(mx);
			}
		}

		cout << mx << endl;

	}

  	return 0;
}