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
#define test int t; cin >> t; while(t--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define maxx 1e6+7

int main() {
	off;
	int a[1007];
	int b[1007];

	test {
		int n;
		cin >> n;

		rep(i, n) {
			cin >> a[i];
		}

		rep(i, n) {
			cin >> b[i];
		}

		sort(a, a+n);
		sort(b, b+n);

		ll res = 0;

		rep(i, n) {
			res += a[i] * b[i];
		}

		cout << res << endl;
	}

  	return 0;
}