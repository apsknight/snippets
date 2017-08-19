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
#define mod 1000000007

map<string, int> m;

void foo(string in) {
	int si = in.length();
	if (m[in] == 1)
		return;
	for(int i = 0; i < si-2; i++) {
		if (in[i]-'0' > 0 && in[i+1]-'0' > 0) {
			in[i]--;		
			in[i+1]--;
			in[i+2]++;
			foo(in);
			m[in] = 1;
			in[i]++;		
			in[i+1]++;
			in[i+2]--;
		}
	}
	if (in[si-2]-'0' > 0 && in[si-1]-'0' > 0) {
		in[si-2]--;
		in[si-1]--;
		// in = in + '1';
		foo(in+'1');
		m[in+'1'] = 1;
		in[si-2]--;
		in[si-1]--;
	}
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		m.clear();
		string in = "";
		int n;
		cin >> n;
		char ch;
		for(int i = 0; i < n; i++) {
			cin >> ch;
			in = in + ch;
		}
		foo(in);
		long long ctr = 0;
		for(map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
			if (it->second == 1) {
				ctr++;
				ctr = ctr % mod;
				// cout << it->first << endl;
			}
		}

		cout << ctr+1 << endl;
	}
}