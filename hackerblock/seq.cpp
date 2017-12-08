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
#define MOD 1000000000

ll k;
vector<ll> b, c;

vector< vector<ll> > multiply(vector< vector<ll> > A, vector< vector<ll> > B) {
	vector< vector<ll> > C(k+1,vector<ll>(k+1));

	fogg(i, 1, k) {
		fogg(j, 1, k) {
			fogg(x, 1, k) {
				C[i][j] = (C[i][j] + (A[i][x] * B[x][j]) % MOD) % MOD;
			}
		}
	}

	return C;
}

vector< vector<ll> > power(vector< vector<ll> > A, ll p) {
	if (p == 1) return A;

	if (p & 1) return multiply(A, power(A, p - 1));

	vector< vector<ll> > X = power(A, p / 2);
	return multiply(X, X);
	
}

ll calculate(ll n) {
	if (n == 0) return 0;
	if (n <= k) return b[n-1];
	vector<ll> F1(k+1);
	rep(i, k) {
		F1[i+1] = b[i];
	}
	vector< vector<ll> > T(k+1, vector<ll>(k+1));

	fogg(i, 1, k) {
		fogg(j, 1, k) {
			if (i < k) {
				if (j == i+1) T[i][j] = 1;
				else T[i][j] = 0;
				continue;
			}
			T[i][j] = c[k-j];
		}
	}

	T = power(T, n-k);
	// debug(n);
	ll res = 0;

	fogg(i, 1, k) {
		// debug(i);
		res = (res + (T[k][i]*F1[i]) % MOD) % MOD ;
	}

	return res;
}

int main() {
	// off;
	test {
		cin >> k;
		ll num;
		rep(i, k) {
			cin >> num;
			b.push_back(num);
		}

		rep(i, k) {
			cin >> num;
			c.push_back(num);
		}

		ll n;
		cin >> n;
		cout << calculate(n) << endl;

		b.clear();
		c.clear();
	}

  	return 0;
}