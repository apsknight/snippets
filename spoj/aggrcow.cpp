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
	test {
		int n, c, a[100009];
		cin >> n >> c;
		rep(i, n) {
			cin >> a[i];
		}
		sort(a, a+n);
		int lo = 0, hi = a[n-1]-a[0];

		while(lo < hi) {
			int mid = (lo + hi + 1) >> 1;
			int i = 0, j = 1, cow = 1;
			while(j < n) {
				if(a[j] - a[i] >= mid) i = j++, cow++;
				else j++;
			}
			if (cow >= c) lo = mid;
			else hi = mid - 1;
		}
		print(hi);
	}
  	return 0;
}