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
	off;
	int n;
	cin >> n;
	st s;
	cin >> s;
	int l = 0, u = 0, d = 0, r = 0;
	rep(i, n) {
		if (s[i] == 'L') l++;
		else if (s[i] == 'R') r++;
		else if (s[i] == 'U') u++;
		else if (s[i] == 'D') d++;
	}

	cout << (min(l, r)*2 + min(u, d)*2) << endl;
  	return 0;
}