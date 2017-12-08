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

bool check(list<int> a) {
	rep(i, a.size()) {
		if (a[i] > 1) return false;
	}
	return true;
}

int main() {
	// off;
	ll n, r, l;
	cin >> n >> r >> l;
	list<int> a;
	a.push_back(n / 2);
	a.push_back(n % 2);
	a.push_back(n / 2);

	while(!check(a)) {
		rep(i, a.size()) {
			if (a[i] > 1) {
				a[i] = a[i] / 2;

			}
		}
	}

  	return 0;
}