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

// typedef long long unsigned long;
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
		unsigned long n;
		cin >> n;
		unsigned long temp;
		unsigned long mx = 0, count = 0;
		for(unsigned long i = 0; i < n; i++) {
			cin >> temp;
			if (temp > mx) {
				mx = temp;
				count = 1;
			}
			else if (temp == mx) {
				count++;
			}
		}
		unsigned long mx2 = 0, count2 = 0;
		temp = 0;
		for(unsigned long i = 0; i < n; i++) {
			cin >> temp;
			if (temp > mx2) {
				mx2 = temp;
				count2 = 1;
			}
			else if (temp == mx2) {
				count2++;
				// debug(i);
			}
		}
		// debug(count);
		// debug(count2);
		cout << count*count2 << endl;
	}

  	return 0;
}