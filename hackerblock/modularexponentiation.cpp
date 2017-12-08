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

ll power(ll a, ll b, ll c) {
    if (b == 0) return 1;
    
    ll ans = power(a, b / 2, c);
    ans = ((ans % c) * (ans % c)) % c;
    if (b & 1) return ((ans % c) * (a % c)) % c;
    
    return ans; 
}

int main() {
	off;
	ll a, b, c; cin >> a >> b >> c;
	a = a % c;

	cout << power(a, b, c) << endl;

  	return 0;
}