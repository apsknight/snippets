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
#define test int tes; cin >> tes; while(tes--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD (long long)10000000007
const int INF = 0x3f3f3f3f;

int main() {
	off;
	test {
		ll n;
		cin >> n;
		ll ans = 0;
		ans += (((n-1) / 3) * (3 + ((n-1)/3)*3))/2;
		ans += (((n-1) / 5) * (5 + ((n-1)/5)*5))/2;
		ans -= (((n-1) / 15) * (15 + ((n-1)/15)*15))/2; 
		cout << ans << endl;
	}

  	return 0;
}