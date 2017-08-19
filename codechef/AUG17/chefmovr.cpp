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
	ll a[100007];
	test {
		ll n, d;
		cin >> n >> d;

		ll sum = 0;
		rep(i, n) {
			cin >> a[i];
			sum += a[i];
		}

		if (sum % n != 0) {
			cout << -1 << endl;
			continue;
		}

		sum = sum / n;
		ll res = 0;

		rep(i, n-d) {
			a[i+d] += (a[i] - sum);
			res += abs(a[i] - sum);
			a[i] = sum;
			// debug(res);
		}

		bool flag = true;
		// debug(sum);
		rep(i, n) {
			// debug(a[i]);
			if (a[i] != sum)
				flag = false;
		}

		if (flag)
			cout << res << endl;
		else
			cout << -1 << endl;
	}

  	return 0;
}