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
		int n, m;
		cin >> n >> m;
		st a[n];

		rep(i, n) {
			cin >> a[i];
		}

		int c1 = 0, c2 = 0;
		rep(i, n) {
			rep(j, m) {
				if ((i+j) % 2 == 0) {
					if (a[i][j] == 'G') c1 += 3;
					else c2 += 5;
				}
				else {
					if (a[i][j] == 'G') c2 += 3;
					else c1 += 5;
				}
			}
		}

		cout << min(c1, c2) << endl;
	}

  	return 0;
}