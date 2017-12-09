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

ll freq[100000];

void build(ll* a, ll n) {
	memset(freq, 0, sizeof freq);
	int temp = 0;
	rep(i, n) {
		temp = temp ^ a[i];
		freq[temp]++;
	}
}

int main() {
	// off;
	ll n, q;
	cin >> n >> q;

	ll a[n];
	int x = (int)(ceil(log2(n))); 
	int stsz = 2*(int)pow(2, x) - 1;
	ll st[stsz];
	rep(i, n) {
		cin >> a[i];
	}
	// construct(a, st, 0, n-1, 0);
	build(a, n);
	int p, y, z;
	while (q--) {
		cin >> p >> y >> z;
		if (p == 1) {
			// update(st, a, 0, n-1, 0, y-1, z);
			a[y-1] = z;
			build(a, n);
		}
		else {
			// int ans = 0;
			// // rep(i, y) {
			// // 	if (query(st, 0, n-1, 0, i, 0) == z) ans++;
			// // }
			// int xo = 0;
			// rep(i, y) {
			// 	xo = xo ^ a[i];
			// 	if (xo == z) ans++;
			// } 
			// cout << ans << endl;
			
		}
	}

  	return 0;
}
