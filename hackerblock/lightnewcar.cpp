/***
 *                                    _____           _                 _____ _             _     
 *      /\                           |  __ \         | |               / ____(_)           | |    
 *     /  \   _ __ ___   __ _ _ __   | |__) | __ __ _| |_ __ _ _ __   | (___  _ _ __   __ _| |__  
 *    / /\ \ | '_ ` _ \ / _` | '_ \  |  ___/ '__/ _` | __/ _` | '_ \   \___ \| | '_ \ / _` | '_ \ 
 *   / ____ \| | | | | | (_| | | | | | |   | | | (_| | || (_| | |_) |  ____) | | | | | (_| | | | |
 *  /_/    \_\_| |_| |_|\__,_|_| |_| |_|   |_|  \__,_|\__\__,_| .__/  |_____/|_|_| |_|\__, |_| |_|
 *  @apsknight, </www.amanpratapsingh.in>                     | |                      __/ |      
 *  Indian Institute of Techology Bhubaneswar                 |_|                     |___/       
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
ll mod = 1000000007;

ll foo(st x, ll m) {
	ll len = x.length();
	ll ans = 0;
	rep(i, len) {
		ans = (ans * 10) % m + x[i] - '0';
		ans %= m;
	} 

	return ans;
}

ll power(ll x, ll y) {
	if (y == 0) 
		return 1;

	ll sh = power(x, y / 2);
	sh %= mod;

	sh = (sh*sh) % mod;

	if(y & 1) {
		return (x * sh) % mod;
	}
	else
		return sh;
}

int main() {
	off;
	test {
		string a, b;
		cin >> a >> b;
		ll x = foo(a, mod);
		ll y = foo(b, mod-1);
		// cout << x << " " << y << endl;
		cout << power(x, y) << endl;
	}

  	return 0;
}