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
#define debug(x) cout << '>' << #x << ':' << x << "\nn";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mxx 1e6+7

bool check(int a[3], int b[3]) {
	if ((a[0] >= b[0] && a[1] >= b[1] && a[2] >= b[2]) && (a[0] > b[0] || a[1] > b[1] || a[2] > b[2])) {
		return true;
	}
	return false; 
}
int main() {
	// off;
	test {
		int a[3], b[3], c[3];

		// rep(i, 3) {
		// 	int temp1, temp2, temp3;
		// 	cin >> temp1;
		// 	cin >> temp2;
		// 	cin >> temp3;

		// 	a[i] = make_pair(temp1, i);
		// 	b[i] = make_pair(temp2, i);
		// 	c[i] = make_pair(temp3, i);
		// }
		rep(i, 3) {
			cin >> a[i];
		}
		rep(i, 3) {
			cin >> b[i];
		}

		rep(i, 3) {
			cin >> c[i];
		}
		// sort(a, a+3);
		// sort(b, b+3);
		// sort(c, c+3);

		// if a b c
		bool flag = false;
		if (check(a, b) && check(b, c)) flag = true;
		// a c b
		else if (check(a, c) && check(c, b)) flag = true;
		// b a c
		else if (check(b, a) && check(a, c)) flag = true;
		// b c a
		else if (check(b, c) && check(c, a)) flag = true;
		// c a b
		else if (check(c, a) && check(a, b)) flag = true;
		// c b a
		else if (check(c, b) && check(b, a)) flag = true;

		if (flag) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}

	}

  	return 0;
}