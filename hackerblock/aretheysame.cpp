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

bool foo(st a, st b) {
	if (a == b) {
		return true;
	}
	st a1 = "", a2 = "", b1 = "", b2 = "";
	int len = a.length();
	if (len & 1) {
		return false;
	}
	rep(i, len / 2) {
		a1 += a[i];
		b1 += b[i];
	}

	fogg(i, len/2, len-1) {
		a2 += a[i];
		b2 += b[i];
	}
	// debug(a1);
	// debug(a2);
	// debug(b1);
	// debug(b2);
	return (foo(a1, b1) && foo(a2, b2)) || (foo(a1, b2) && foo(a2, b1));
}

int main() {
	// off;
	test {
		st a, b;
		cin >> a >> b;

		if (foo(a, b)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

  	return 0;
}