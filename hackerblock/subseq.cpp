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
	// off;
	test {
		set<string> ans;
		string s;
		cin >> s;

		int len = s.length();

		rep(i, (1 << len)) {
			int mask = i;
			int idx = 0;
			st temp = "";
			while (mask) {
				if (mask & 1) {
					temp += (s[idx]);
				}
				mask = mask >> 1;
				idx++;
			}
			ans.insert(temp);
		}
		for(set<string>::iterator it = ans.begin(); it != ans.end(); it++) {
			cout << *it << endl;
		}
	}	

  	return 0;
}