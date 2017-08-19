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

	ll a[100007];

	ll n, q;
	cin >> n >> q;

	rep(i, n) {
		cin >> a[i];
	}

	ll type, i, k, l, r, x;
	rep (p, q) {
		cin >> type;
		if (type == 1) {
			cin >> i >> k;
			i--;
			int dup = i;
			int temp = 0;
			while (k > 0 && i < n-1 && temp <= 100) {
				if (a[i+1] > a[i]) {
					k--;
					temp = 0;
				}
				else {
					temp++;
				}
				i++;
			}
			if (temp < 100) {
				dup = i;
			}
			cout << dup+1 << endl;
		}
		else if (type == 2) {
			cin >> l >> r >> x;
			fogg(qw, l-1, r-1) {
				a[qw] = a[qw] + x;
			}
		}	
	}

  	return 0;
}