/***
 *                                    _____           _                 _____ _             _     
 *      /\                           |  __ \         | |               / ____(_)           | |    
 *     /  \   _ __ ___   __ _ _ __   | |__) | __ __ _| |_ __ _ _ __   | (___  _ _ __   __ _| |__  
 *    / /\ \ | '_ ` _ \ / _` | '_ \  |  ___/ '__/ _` | __/ _` | '_ \   \___ \| | '_ \ / _` | '_ \ 
 *   / ____ \| | | | | | (_| | | | | | |   | | | (_| | || (_| | |_) |  ____) | | | | | (_| | | | |
 *  /_/    \_\_| |_| |_|\__,_|_| |_| |_|   |_|  \__,_|\__\__,_| .__/  |_____/|_|_| |_|\__, |_| |_|
 *  @apsknight, </www.amanpratapsingh.in>                     | |                      __/ |      
 *  Indian Institute of Techology Bhubaneswar                 |_|                     |___/       
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
#define mxx 1e6+7

int main() {
	off;
	st s;
	cin >> s;
	ll sz;
	cin >> sz;

	ll len = s.length();

	ll temp = 0, blank = 0;
	int a[26];
	if (len < sz) {
		cout << "impossible" << endl;
		return 0;
	}
	
	memset(a, 0, sizeof(a));
	rep(i, len) {
		if (a[s[i] - 'a'] != 0) {
			temp++;
		}
		a[s[i] - 'a']++;
	}
	rep(i, 26) {
		if (a[i] == 0)
			blank++;
	}

	if ((len-temp) >= sz) {
		cout << 0 << endl;
		return 0;
	}
	if ((len-temp) < sz && (sz-len+temp) <= blank) {
		cout << sz-len+temp << endl;
		return 0;
	}

	cout << "impossible" << endl;
	// cout << 
	// else {
	// 	memset(a, 0, sizeof(a));
	// 	rep(i, len) {
	// 		if (a[s[i] - 'a'] != 0) {
	// 			temp++;
	// 		}
	// 		a[s[i] - 'a']++;
	// 	}
	// }

	// rep(i, 26) {
	// 	if (a[i] == 0)
	// 		blank++;
	// }
	// // debug(temp);
	// // debug(blank);
	// // debug(len);
	// // debug(sz);
	// if (temp <= blank) {
	// 	if (len - temp >= sz)
	// 		cout << 0 << endl;
	// 	else
	// 		cout << sz-(len-temp) << endl;
	// }
	// else {
	// 	cout << "impossible" << endl;
	// }

  	return 0;
}