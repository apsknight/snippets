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
#define mxx (int)1e5+7

int main() {
	off;
	int b[1008][1008];
	// vector< vector <int> > b[mxx];
	test {
		memset(b, -1, sizeof(b));

		int n, q;
		cin >> n >> q;
		int u, v, val;
		rep(i, q) {
			cin >> u >> v >> val;
			b[u][v] = val;
		}
		bool flag = true;
		rep(i, n) {
			fogg(j, i, n) {
				if (b[i][j] != -1 && b[j][i] == -1) {
					b[j][i] = b[i][j];
				}
				if (b[j][i] != -1 && b[i][j] == -1) {
					b[i][j] = b[j][i];
				}
				if (i == j && (b[i][j] == -1)) {
					b[i][j] = 0;
				}
				if (i == j && (b[i][j] != 0)) {
					debug(i);
					flag = false;
					break;
				}
				if (b[i][j] != b[j][i]) {
					flag = false;
					break;
				}
			}
			if(!flag) {
				break;
			}
		}
		if (!flag) {
			cout << "no" << endl;
			continue;
		}
		ll res = 0, temp = 0;
		for(int i = 0, j = 1; i < n && j < n; i++, j++) {
			if (b[i][j] > 0)
				res += b[i][j];
		}
		for(int k = 2; k < n; k++) {
			temp = 0;
			for(int i = 0, j = k; i < n && j < n; i++, j++) {
				if (b[i][j] > 0)
					temp += b[i][j];
			}
			if (temp != res) {
				flag = false;
				break;
			}
		}
		if (!flag) {
			cout << "no" << endl;
			continue;
		}
		else {
			cout << "yes" << endl;
		}
	}
  	return 0;
}