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

int main() {
	off;
	st s;

	while(cin >> s) {
		ll t1 = 0, t2 = 0, p = 5, q = 5, mat = 0;
		rep(i, 10) {
			if (i % 2) {
				t2 += s[i]-'0';
				q--;
			}
			else {
				t1 += s[i]-'0';
				p--;
			}
			mat++;
			if (t1-t2 > q) break;
			else if (t2-t1 > p) break;
		}
		if (t1 != t2) {
			if (t1 > t2) cout << "TEAM-A " << mat << endl;
			else cout << "TEAM-B " << mat << endl;
			continue;
		}
		while (t1 == t2 && mat < 20) {
			t1 += s[mat++]-'0';
			t2 += s[mat++]-'0';
		}
		if (t1 > t2) cout << "TEAM-A " << mat << endl;
		else if (t2 > t1) cout << "TEAM-B " << mat << endl;
		else cout << "TIE" << endl;
	}

  	return 0;
}
