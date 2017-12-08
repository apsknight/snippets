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

ll power(ll a, ll b) {
    if (b == 0) return 1;
    
    ll ans = power(a, b / 2);
    ans *= ans;
    if (b & 1) return ans * a;
    
    return ans; 
}

int main() {
	off;
	test {
		int n, q;
		cin >> n >> q;
		int a[n];
		rep(i, n) {
			cin >> a[i];
		}

		int bit = power(2, n) - 1;
		bool flag = false;
		for(int i = 1; i <= bit; i++) {
			int temp = i;
			int sum = 0;
			int ctr = 0;
			while(temp) {
				if (temp & 1) sum += a[ctr];
				temp = temp >> 1;
				ctr++;
			}
			if (sum == q) {
				cout << "Yes" << endl;
				flag = true;
				break;
			}
		}
		if (!flag) {
			cout << "No" << endl;
		}
	}
  	return 0;
}