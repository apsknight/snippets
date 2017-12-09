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
#define test int t; cin >> t; while(t--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mxx 1e6+7

int main() {
	off;
	test {
		ll n;
		cin >> n;
		if (n == 1 || n == 2 || n == 3) {
			cout << "NO" << endl;
			continue;
		}
		ll root = sqrt(n);
		bool flag = true;
		if (root * root == n && ((root % 2 != 0) || root == 2)) {
			for(ll i = 3; i <= sqrt(root); i += 2) {
				if (root % i == 0) {
					cout << "NO" << endl;
					flag = false;
					break;
				}
			}
			if (flag) cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

  	return 0;
}