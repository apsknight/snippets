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
	int a[10007];

	ll n, sum = 0, chg = 0;
	cin >> n;

	while(n != -1) {
		sum = 0;
		chg = 0;
		rep(i, n) {
			cin >> a[i];
			sum += a[i];
		}
		if (sum % n == 0) {
			sum /= n;
			rep(i, n) {
				chg += max((sum-a[i]), (ll)0);
			}
			cout << chg << endl;
		}
		else {
			cout << -1 << endl;
		}
		cin >> n;
	}
  	return 0;
}