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
		ll n, iid;
		cin >> n >> iid;

		stack<ll> stk;
		stk.push(iid);
		char c;
		ll id;
		rep(i, n) {
			cin >> c;
			// debug(c);
			if (c == 'P') {
				cin >> id;
				stk.push(id);
				// cout << stk.top() << endl;
			}
			else if (c == 'B') {
				// cout << stk.top();
				stk.pop();
			}
			cout << stk.top() << endl;
		}

		cout << stk.top() << endl;
	}

  	return 0;
}