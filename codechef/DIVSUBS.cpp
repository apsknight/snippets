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
	test {
		int n;
		cin >> n;
		int a[n+1];
		int freq[n+1]={0};
		int temp = 0, small = 0, large = 0;
		freq[0] = 1;
		fogg(i, 1, n) {
			cin >> a[i];
			temp = (temp + a[i]) % n;
			if (freq[temp]) {
				small = freq[temp], large = i;
			}
			freq[temp] = i+1;
		}
		// debug(large);
		// debug(small);
		cout << large-small+1 << endl;
		while (small <= large) {
			cout << small++ << " ";
		}
		cout << endl;
	}

  	return 0;
}