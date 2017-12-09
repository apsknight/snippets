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
	int sieve[1000007];
	for(int i = 2; i*i <= 1000007; i++)
			if (sieve[i] == 0)	for(int j = i*2; j <= 1000003; j += i) sieve[j] = 1;
	vi prime;
	for(int i = 2; i < 1000003; i++) {
		if (sieve[i] == 0) prime.push_back(i);
	}

	test {
		int n;
		cin >> n;
		cout << prime[n-1] << endl;
	}

  	return 0;
}