/**
*	Aman Pratap Singh (@apsknight)
*	Indian Institute of Technology Bhubaneswar
*	www.apsknight.cf
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define test int t; cin >> t; while(t--)
#define fori(i,a,b) for(int i = (a); i <= (b); i++)
#define ford(i,a,b) for(int i = (a); i >= (b); i--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
	off;
	int n;
	cin >> n;
	int a[100005] = {0};

	rep(i, n) {
		cin >> a[i];
	}
	int mx = 0, t = 0;
	fori(i, 1, n) {
		if(a[i] = 1 && a[i-1] == 1) {
			t++;
		}
		if (a[i] == 2)
			t = 0;

		mx = max(mx, t);
	}

	debug(mx);

  	return 0;
}