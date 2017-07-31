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
#define input ll a[10000000]; ll n; cin >> n; rep(i, n) cin >> a[i]
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define print(x) cout << x << "\n"
#define printsl(x) cout << x << " "
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD 1e9+7

int main() {
	off;
	int n, nd = 0, ni = 0, mx = 0, mi = 0;
	
	cin >> n;

	int a[n];

	rep(i, n) {
		cin >> a[i];
	}

	int temp = 0;
	rep(i, n) {
		if (a[i] == 1) {
			temp++;
		}
		else {
			if (temp > nd) {
				nd = temp;
				ni = i;
			}
			temp--;
		}
	}

	int pent = 0, tem = 0;
	rep(i, n) {	
		if (a[i] == 1) {
			pent++;
		}

		else {
			pent--;
		}
		if (pent != 0) {
				tem++;
		}
		else if (pent == 0) {
			if (tem > mx) {
				mx = tem + 1;
				mi = i - mx + 2;
			}
			tem = 0;
		}
		// debug(pent);
	}

	cout << nd << " " << ni << " " << mx << " " << mi << "\n";

  	return 0;
}