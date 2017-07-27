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
	// #ifndef ONLINE_JUDGE
	//     freopen("input.txt", "r", stdin);
	//     freopen("output.txt", "w", stdout);
	// #endif
	
	test {
		ll n, b, div;

		cin >> n >> b;

		if (n % b == 0) {
			div = n / b;
			cout << (div / 2) * (n - b * (div / 2)) << endl;
		}
		else {
			div = n / b;
			cout << max((div / 2) * (n - b * (div / 2)), (div / 2 + 1) * (n - b * (div / 2 +1))) << endl;
		}

	}

  	return 0;
}
// 10 2
// 10 0 0
// 8 1 8
// 6 2 12
// 4 3 12
// 2 4 8
// 0 5 0

// 6 1
// 5 1 5
// 4 2 8
// 3 3 9
// 2 4 8
// 1 5 5

// 8 5
// 3 1 3

// 24 4
// 20 1 20
// 16 2 32
// 12 3 36
// 8  4 32
// 4  5 20

// 20 3
// 17 1 17
// 14 2 28
// 11 3 33
// 8  4 32
// 5  5 25
// 2  6 12

// 22 3
// 19 1 19
// 16 2 32
// 13 3 39 
// 10 4 40
// 7 5 36
// 4 6 24
// 1 7 1