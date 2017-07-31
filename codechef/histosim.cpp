/**
*	Aman Pratap Singh (@apsknight, </www.apsknight.cf>)
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
#define maxx 1e6+7

int main() {
	off;
	test {
		st x, y;
		cin >> x >> y;
		int ctr1 = 1;
		int ctr2 = 1;
		int pt1[1007];
		int pt2[1007];
		int ar1[26];
		int ar2[26];
		rep(i, 26) {
			ar1[i] = 0;
			ar2[i] = 0;
		}
		int len1 = x.length();
		int len2 = y.length();

		rep(i, len1) {
			if (ar1[x[i] - 'a'] == 0) {
				ar1[x[i] - 'a'] = ctr1;
				ctr1++;
			}
			pt1[i] = ar1[x[i] - 'a'];
		}

		rep(i, len2) {
			if (ar2[y[i] - 'a'] == 0) {
				ar2[y[i] - 'a'] = ctr2;
				ctr2++;
			}
			pt2[i] = ar2[y[i] - 'a'];
		}

		bool flag = false;
		rep(i, len1) {
			if (pt1[i] != pt2[i]) {
				flag = true;
				cout << "NO" << endl;
				break;
			}
		}

		if (flag == false) {
			cout << "YES" << endl;
		}

		// rep(i, len1) {
		// 	cout << pt1[i] << " " << pt2[i] << endl;
		// }
		// cout << endl;
	}

  	return 0;
}