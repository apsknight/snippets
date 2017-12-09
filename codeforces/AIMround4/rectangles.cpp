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
	int n, m;
	int a[57][57];
	cin >> n >> m;

	rep(i, n) {
		rep(j, m) {
			cin >> a[i][j];
		}
	}

	ll res = n*m;

	int white = 0, black = 0;

	rep(i, n) {
		white = 0;
		black = 0;
		rep(j, m) {
			// 			debug(i);
			// debug(j);
			// debug(a[i][j]);
			if (a[i][j] == 0)
				black++;
			else if (a[i][j] == 1)
				white++;
		}
		// debug(black);
		// debug(white);
		res += pow(2, white) - white - 1 + pow(2, black) - black - 1;
	}

	rep(i, m) {
		white = 0;
		black = 0;
		rep(j, n) {
			// debug(i);
			// debug(j);
			// debug(a[j][i]);
			if (a[j][i] == 0)
				black++;
			else if (a[j][i] == 1)
				white++;
		}
		// debug(black);
		// debug(white);
		res += pow(2, white) - white - 1 + pow(2, black) - black - 1;
	}

	cout << res << endl;
  	return 0;
}