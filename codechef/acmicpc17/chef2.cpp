/**
*	Aman Pratap Singh (@apsknight, </www.amanpratapsingh.in>)
*	Indian Institute of Technology Bhubaneswar 
*/
#include <bits/stdc++.h>
using namespace std;

typedef double ll;
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

ll firstSum(vector<ll> a) {
	ll sz = a.size();
	ll ans = 0;
	rep(i, sz) {
		ans += a[i];
	}

	return ans;
}

ll secSum(vector<ll> a) {
	ll sz = a.size();
	ll ans = 0;
	rep(i, sz) {
		ans += a[i]*a[i];
	}

	return ans;
}

int main() {
	off;
	test {
		long long n, s;
		cin >> n >> s;
		if (n == 1 && s == 0) {
			cout << 0 << endl;
			continue;
		}
		if (n == 1) {
			cout << -1 << endl;
			continue;
		}
		double ans;
		if (n != 1)
		ans = (pow(n,3))*pow(s,2) / ((n-1) + pow(n-1, 2));
		ans = sqrt(ans);
		// ll mean = 1;
		// vector<ll> a;
		// vector<ll> b;
		// a.push_back(0);
		// b.push_back(0);
		// a.push_back((double)2*s);
		// b.push_back(-(double)2*s);
		// ll sz = 2;
		// fogg(i, 2, n-1) {
		// 	ll x = 0;
		// 	ll y = firstSum(a);
		// 	ll z = secSum(a);
		// 	double delta = 4*y*y - 4*(1-sz)*(y*y - z*x);
		// 	if (delta < 0) break;
		// 	x = (-2*y + sqrt(delta))/2*(1-sz);
		// 	sz++;
		// 	a.push_back(x);
		// }

		// fogg(i, 2, n-1) {
		// 	ll x = 0;
		// 	ll y = firstSum(b);
		// 	ll z = secSum(b);
		// 	double delta = 4*y*y - 4*(1-sz)*(y*y - z*x);
		// 	if (delta < 0) break;
		// 	x = (-2*y + sqrt(delta))/2*(1-sz);
		// 	sz++;
		// 	b.push_back(x);
		// }
		// if (a.size() != n && b.size() != n) {
		// 	cout << -1 << endl;
		// 	continue;
		// }
		// else if (a.size() == n)
		// rep(i, n) {

		// 	cout << setprecision(10) << a[i] << " ";
		// }
		// else if (b.size() == n)
		// rep(i, n) {

		// 	cout << setprecision(10) << b[i] << " ";
		// }

		// cout << endl;
		rep(i, n-1) {
			cout << 0 << " ";
		}

		cout << setprecision(10) << ans << endl;
	}

  	return 0;
}