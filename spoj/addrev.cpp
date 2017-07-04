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

ll foo(ll a, ll b) {
	ll c = 0, d = 0, e = 0, f = 0;
	while(a) {
		c = c * 10 + a % 10;
		a = a / 10;
	}
	while(b) {
		d = d * 10 + b % 10;
		b = b / 10;
	}

	e = c + d;

	while(e) {
		f = f * 10 + e % 10;
		e = e / 10;
	}
	return f;
}

int main() {
	off;
	// #ifndef ONLINE_JUDGE
	//     freopen("input.txt", "r", stdin);
	//     freopen("output.txt", "w", stdout);
	// #endif
	
	test {
		ll a, b;
		cin >> a >> b;

		cout << foo(a, b) << endl;
	}

  	return 0;
}