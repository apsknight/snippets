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
#define MOD (long long)1000000007
const int INF = 0x3f3f3f3f;

void permute(st s, int l, int r) {
	if (l == r) {
		cout << s << endl;
		return;
	}

	for(int i = l; i <= r; i++) {
		swap(s[l], s[i]);
		permute(s, l+1, r);
		swap(s[l], s[i]);
	}
}

int main() {
	off;
	st s;
	cin >> s;
	sort(s.begin(), s.end());

	permute(s, 0, s.length()-1);

  	return 0;
}