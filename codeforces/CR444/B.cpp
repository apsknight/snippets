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
	int n;
	cin >> n;
	// vector<int> a(6)[n];
	int a[10] = {0};
	rep(i, n) {
		rep(j, 6) {
			int temp;
			cin >> temp;
			a[temp]++;
		}
	}
	// rep(i, 10) {
	// 	debug(a[i]);
	// }
	int ans = INT_MAX;
	fogg(i, 1, 10) {
		if (a[i] == 0) {
			ans = min(ans, max(i-1, 0));
		}
		else if (a[i] == 1) {
			ans = min(ans, max(i*10+(i-1), 0));
		}
		else if (a[i] == 2) {
			ans = min(ans, max(i*100 + i*10 + i-1, 0));
		}
		// debug(a[i]);
		// debug(ans);
	}

	if (a[1] == 0) ans = 0;
	cout << max(ans, 0) << endl;
  	return 0;
}