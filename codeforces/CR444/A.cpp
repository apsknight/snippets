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
	st s;
	cin >> s;
	int n = s.length();

	bool flag = false;
	int ctr = 0;
	rep(i, n) {
		if (s[i] == '1') flag = true;
		if (flag) {
			if (s[i] == '0') ctr++;
		}
	}

	if (ctr >= 6) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

  	return 0;
}