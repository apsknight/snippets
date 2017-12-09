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

bool check(int f1, f2) {
	if (f1 == 12 && f2 == 16) return true;
	if (f1 == 0 && f2 == 8) return true;
	if (f1 == 4 && f2 == 20) return true;

	return false;
}
int main() {
	off;
	int a[24];
	rep(i, 24) {
		cin >> a[i];
	}

	int ctr = 0, f1=-1, f2=-1;
	for(int i = 0, i <= 20; i += 4) {
		if (i % 4 == 0) {
			if (a[i] == a[i+1] && a[i+1] == a[i+2] && a[i+2] == a[i+3]) {
				ctr++;
				if (ctr == 1) f1 = i;
				if (ctr == 2) f2 = i;
			}
		}
	}

	if (ctr < 2 || check(f1, f2) == false) {
		cout << "no" << endl;
		return 0;
	}
	ctr++;
	ctr++;
	int x1, x2, x3, x4;
	for(int i = 0; i <=20; i += 4) {
		if (ctr == 4 && (i != f1) || (i != f2)) {
			x1 = i;
			ctr--;
		}
		if (ctr == 3 && (i != f1) || (i != f2)) {
			x2 = i;
			ctr--;
		}
		if (ctr == 2 && (i != f1) || (i != f2)) {
			x3 = i;
			ctr--;
		}
		if (ctr == 1 && (i != f1) || (i != f2)) {
			x4 = i;
			ctr--;
		}
	}

	int su = 0
	if ((f1 % 4) % 2 == 0) su = 2;
	else su = 1;
  	return 0;
}