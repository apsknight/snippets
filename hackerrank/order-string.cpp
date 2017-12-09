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
#define INF (int)1<<20
#define MOD (long long)10000000007

int main() {
	// off;
	ll n;
	cin >> n;
	vector<string> a(n);

	cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
	rep(i, n) {
		getline(cin, a[i]);
		// cout << a[i] << endl;
	}
	// cin.clear();
	st last;
	st ar="";
	st b="";
	st c="";
	// ll key;
	bool reversed;
	char comptype;
	getline(cin, last);
	// debug(last);
	int space = 2;
	rep(i, last.length()) {
		if (last[i] == ' ') {
			space--;
			continue;
		}
		if (space == 2) {
			ar = ar + last[i];
		}
		else if (space == 1) {
			b = b + last[i];
		}
		else if (space == 0) {
			c = c + last[i];
		}
	}

	ll key = 0;
	ford(i, ar.length() - 1, 0) {
		key = key*10 + (ar[i] - '0');
	} 

	if (c[0] == 'l') {
		vector< pair<string, int> > tosort(n);
		if (key == 1) {
			rep(i, n) {
				tosort[i] = make_pair(a[i], i);
			}
		}
		else {
			ll spc = key - 1; 
			rep(i, n) {
				ll len = a[i].length();
				int j = 0; st val = "";
				while(spc > 0 && j < len) {
					if (a[i][j] == ' ') spc--;
					j++;
				}
				debug(j);
				j++;
				while (j < len || a[i][j] != ' ') {
					val += a[i][j];
					j++;
				}
				debug(val);
				tosort[i] = make_pair(val, i);
			}
		}
		sort(tosort.begin(), tosort.end());
		if (b[0] == 't') {
			ford(i, n-1, 0) {
				cout << a[tosort[i].second] << endl;
			}	
		}
		else {
			rep(i, n) {
				cout << a[tosort[i].second] << endl;
			}
		}
	}
	else {
		vector< pair<int, int> > intsort(n);
		if (key == 1) {
			rep(i, n) {
				ll len = a[i].length();
				int temp = 0;
				ford(j, len - 1, 0) {
					temp = temp*10 + (a[i][j] - '0');
				}
				intsort[i] = make_pair(temp, i);
			}
		}
		else {
			ll spc = key - 1; 
			rep(i, n) {
				ll len = a[i].length();
				int j = 0; st val = "";
				while(spc > 0 && j < len) {
					if (a[i][j] == ' ') spc--;
					j++;
				}
				j++;
				while (j < len || a[i][j] != ' ') {
					val += a[i][j];
					j++;
				}
				ll temp = 0;
				ford(pq, val.length()-1, 0) {
					temp = temp*10 + (val[pq] - '0');
				}
				intsort[i] = make_pair(temp, i);
			}
		}
		rep(i, n) {
			cout << intsort[i].first << " ";
		}
		cout << endl;
		sort(intsort.begin(), intsort.end());
		if (b[0] == 't') {
			ford(i, n-1, 0) {
				cout << a[intsort[i].second] << endl;
			}	
		}
		else {
			rep(i, n) {
				cout << a[intsort[i].second] << endl;
			}
		}
	}
  	return 0;
}