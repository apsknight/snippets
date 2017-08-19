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

	test {
		st s, t;
		cin >> s >> t;
		int len;
		len = s.length();

		if (len == 1) {
			cout << 'B' << endl;
			continue;
		}
		
		int a[26] = {0};
		int b[26] = {0};

		rep(i, len) {
			a[s[i]-'a']++;
			b[t[i]-'a']++;
		}

		bool flag = false, flag1 = false;
		rep(i, 26) {
			if (a[i] == len) {
				rep(j, 26) {
					if (b[j] == len) {
						flag1 = true;
						if (i != j) {
							flag = true;
							break;
						}
					}
				}
				if (flag1)
					break;
			}
			else if (b[i] == len) {
				if (a[i] > 0) {
					flag = true;
					break;
				}
				rep(j, 26) {
					if (a[j] == len) {
						flag1 = true;
						if (i != j) {
							flag = true;
						}
						break;
					}
				}
				if (flag1)
					break;
			}
			if (a[i] >= 1 && b[i] == 0) {
				// cout << 'A' << endl;
				if (a[i] > 1) {
					flag = true;
					break;
				}
				rep(j, 26) {
					if (b[j] > 0) {
						flag = true;
						if (a[j] == 0) {
							flag = false;
							break;
						}
					}
				}
			}
		}

		if (flag) {
			cout << 'A' << endl;
		}
		else {
			cout << 'B' << endl;
		}
	}
  	return 0;
}