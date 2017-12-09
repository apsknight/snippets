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
	int n;
	cin >> n;
	int a[n];

	rep(i, n) {
		cin >> a[i];
	}
	int p1 = 1;
	int p2 = 2;

	rep(i, n) {
		if (a[i] == p1) {
			p2 = 6 - p1 - p2;
		}
		else if (a[i] == p2) {
			p1 = 6 - p1 - p2;
		}
		else {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
  	return 0;
}