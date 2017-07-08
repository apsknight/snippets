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
		int x, y;
		cin >> x >> y;

		if (x == y || x == y + 2) {
			if (x == y) {
				if (x % 2 == 0) {
					cout << x * 2 << endl;
				}
				else {
					cout << (x-1) * 2 + 1 << endl;
				}
			}
			else if (x == y + 2) {
				if (x % 2 == 0) {
					cout << x * 2 - 2<< endl;
				}
				else {
					cout << (x-1) * 2 - 1 << endl;
				}
			}
		}
		else {
			cout << "No Number" << endl;
		}
	}

  	return 0;
}