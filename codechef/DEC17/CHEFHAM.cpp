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
	int a[100007];
	test {
		int n;
		cin >> n;
		int f[100007]={0};
		rep(i, n) {
			cin >> a[i];
			f[a[i]]++;
		}
		if (n == 1) {
			cout << 0 << endl;
			cout << a[0] << endl;
			continue;
		}
		if (n == 2) {
			if (a[0] == a[1]) {
				cout << 0 << endl;
				cout << a[0] << " " << a[0] << endl;
			}
			else {
				cout << 2 << endl;
				cout << a[1] << " " << a[0] << endl;
			}
			continue;
		}
		vi z, y;
		bool push[100007]={0};
		map<int, int> m;
		rep(i, n) {
			if (f[a[i]] == 2 && push[a[i]] == false) {
				z.push_back(a[i]);
				push[a[i]] = true;
			}
			else if (f[a[i]] == 1) y.push_back(a[i]);
		}
		rep(i, z.size()) {
			m[z[i]] = z[(i+1)%z.size()];
		}
		rep(i, y.size()) {
			m[y[i]] = y[(i+1)%y.size()];
		} 
		if (z.size() != 1 && y.size() != 1) {
			cout << n << endl;
			// int p = 0, q = 0;
			rep(i, n) {
				// if (f[a[i]] == 2) {
				// 	cout << m[a[i]] << " ";
				// 	p++;
				// }
				// else { 
				// 	cout << m[a[i]] << " ";
				// 	q++;
				// }
				cout << m[a[i]] << " ";
			}
		}
		if (y.size() == 1) {
			if (z.size() == 1) {
				cout << n-1 << endl;
			}
			else {
				cout << n << endl;
			}
			int p = 0, q = 0;
			rep(i, n) {
				if (f[a[i]] == 2) {
					if (p+1 == 2*z.size()) {
						cout << y[y.size()-1] << " ";
						continue;
					}
					p++;
					cout << m[a[i]] << " ";
				}
				else {
					if (q+1 == y.size()) {
						cout << z[0] << " ";
						continue;
					}					
					q++;
					cout << m[a[i]] << " ";
				}
			}
		}
		else if (z.size() == 1) {
			cout << n << endl;
			int p = 0, q = 0;
			rep(i, n) {
				if (f[a[i]] == 2) {
					cout << y[p] << " ";
					p++;
				}
				else {
					if (q == 0 || q == y.size()-1) {
						cout << z[0] << " ";
						q++;
						continue;
					}					
					q++;
					cout << m[a[i]] << " ";
				}
			}			
		}
		cout << endl;
	}

  	return 0;
}