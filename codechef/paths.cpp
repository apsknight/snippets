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
#define mxx (int)1e9+7

int main() {
	off;
	ll dp[1007][1007];
	memset(dp, 0, sizeof(dp));

	// dp[0][0] = 1;
	fogg(i, 1, 1000) {
		fogg(j, 1, 1000) {
			if(i == 1 || j == 1) {
				dp[i][j] = 1;
			}
			else {
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
				dp[i][j] %= mxx;
			}
		}
	}
	vector< pair <int, int> > vi;
	test {
		vi.clear();
		ll x = 0;
		st s;
		cin >> s;

		rep(i, s.length()) {
			x = x*10 
			x += (int)(s[i] - '0');
			x %= mxx;
		}
		fogg(i, 1, 1000) {
			fogg(j, 1, 1000) {
				if (dp[i][j] == x) {
					vi.push_back(make_pair(i, j));
				}
			}
		}

		if (vi.empty())
			cout << "The Grid is Too Big!" << endl;
		else {
			cout << vi.size() << endl;
			int sz = vi.size();
			rep(i, sz) {
				cout << vi[i].first << " " << vi[i].second << endl;
			}
		}
	}

  	return 0;
}