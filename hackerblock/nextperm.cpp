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
		int n;
		cin >> n;
		int a[n];

		rep(i, n) {
			cin >> a[i];
		}
		int i = n-1;

		while (i > 0 && a[i - 1] > a[i]) {
			i--;
			break;
		}

		if (i == 0) {
			cout << -1 << endl;
			continue;
		}
		int j = n - 1;
		while (a[j] <= a[i-1])  {
			j--;
			break;
		}
		swap(a[i-1], a[j]);

		reverse(&a[i], a + n);

		rep(i, n) {
			cout << a[i];
		}
		cout << endl;
	}
}