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
	int n, m;
	cin >> n >> m;
	int a[n][m];

	rep(i, n) {
		rep(j, m) {
			cin >> a[i][j];
		}
	}
	int x;
	cin >> x;
	int i = 0, j = m-1;
	int ans = 0;
	while (i < n && j > 0) {
		// debug(a[i][j]);
		if (a[i][j] == x) {
			ans = 1;
			break;
		}
		else if (a[i][j] < x) {
			i++;
		}
		else if (a[i][j] > x) {
			j--;
		}
	}

	cout << ans << endl;

  	return 0;
}