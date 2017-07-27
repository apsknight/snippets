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
#define test int t; cin >> t; for(int ri = 0; ri < t; ri++)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define maxx 1e6+7

int main() {
	off;
	test {
		st s, res = "";
		if (ri == 0)
			cin.ignore();
		getline(cin, s);
		// cout << s;
		int len = s.length();
		int space = 0;

		rep(i, len) {
			if (s[i] == ' ')
				space++;
		}

		if (space == 0) {
			res = res + (char)toupper(s[0]);
			fogg(i, 1, len-1) {
				res = res + (char)tolower(s[i]);
			}
		}

		if (space == 1) {
			bool spc = false;
			res = res + (char)toupper(s[0]) + '.' + ' ';
			// debug(s);
			rep(i, len) {
				if(s[i] == ' ') {
					spc = true;
					res = res + (char)toupper(s[i+1]);
					fogg(j, i+2, len-1)
						res = res + (char)tolower(s[j]);
					break;
				}

			}
		}

		if (space == 2) {
			res = res + (char)toupper(s[0]) + '.' + ' ';
			int i;
			for (i = 0; i < len; i++) {
				if(s[i] == ' ') {
					res = res + (char)toupper(s[i+1]) + '.' + ' ';
					break;
				}
			}
			for (int j = i + 1; j < len; j++) {
				if (s[j] == ' ') {
					res = res + (char)toupper(s[j+1]);
					fogg(k, j+2, len-1)
						res = res + (char)tolower(s[k]);
				}

			}
		}
		// debug(space);
		// debug((char)toupper(s[0]));
		cout << res << endl;
		// cin.ignore();
	}

  	return 0;
}