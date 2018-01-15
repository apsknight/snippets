/***
 *	Aman Pratap Singh (www.amanpratapsingh.in)
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
		int n;
		cin >> n;

		int a[n][n];

		rep(i, n) {
			rep(j, n) {
				cin >> a[i][j];
			}
		}
		ll sum = 0, m = INT_MAX;
		for(int i = n-1; i >= 0; i--) {
			int temp = INT_MIN;
			for(int j = n-1; j >= 0; j--) {
				if (a[i][j] < m)
					temp = max(temp, a[i][j]);
			}
			sum += temp;
			if (temp == INT_MIN) {
				sum = -1;
				break;
			}
			m = temp;
		}

		cout << sum << endl;
	}

  	return 0;
}