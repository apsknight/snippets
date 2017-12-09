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

int main() {
	off;
	string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
    vector<char> a[10];
    map<char, char> m;
    m['a'] = '2';
    m['b'] = '2';
    m['c'] = '2';
    m['d'] = '3';
    m['e'] = '3';
    m['f'] = '3';
    m['g'] = '4';
    m['h'] = '4';
    m['i'] = '4';
    m['j'] = '5';
    m['k'] = '5';
    m['l'] = '5';
    m['m'] = '6';
    m['n'] = '6';
    m['o'] = '6';
    m['p'] = '7';
    m['q'] = '7';
    m['r'] = '7';
    m['s'] = '7';
    m['t'] = '8';
    m['u'] = '8';
    m['v'] = '8';
    m['w'] = '9';
    m['x'] = '9';
    m['y'] = '9';
    m['z'] = '9';
    vector<st> ans;
    st n;
    cin >> n;
    st entry[11] = {""};
    rep(i, 11) {
    	rep(j, searchIn[i].length()) {
    		entry[i] += m[searchIn[i][j]];
    	}
    }
    rep(i, 11) {
		if (entry[i].find(n) != string::npos) {
			ans.push_back(searchIn[i]);
		} 
    }
    ford(i, ans.size()-1, 0) {
    	cout << ans[i] << endl;
    }
  	return 0;
}