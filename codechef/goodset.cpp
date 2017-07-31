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

	test {
		int n;
		cin >> n;

		rep(i, n) {
			cout << i+400 << " ";
		}

		cout << "\n";
	}
  	return 0;
}