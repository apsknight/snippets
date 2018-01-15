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
		ll n, k;
		cin >> n >> k;
 
		int a[n];
		ll prefix = INT_MIN, temp = 0, kad = INT_MIN, sum = 0;
		rep(i, n) {
			cin >> a[i];
			sum += a[i];
			prefix = max(sum, prefix);
			temp += a[i];
			
			if (kad < temp) kad = temp;
			if (temp < 0) temp = 0;
		}
		ll sufs = 0, suffix = INT_MIN;
		ford(i, n-1, 0) {
			sufs += a[i];
			suffix = max(sufs, suffix);
		}
		
		ll ans;
		if (k > 1)
			ans = max(suffix + sum*(k-2) + prefix, max(suffix + prefix, kad));
		else 
			ans = kad;
		cout << ans << endl;
	}
}  