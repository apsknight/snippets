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

st s;
st t;
int a[200007];
int n, p;

bool check(int mid) {
	int ctr = 0;
	st temp = s;
	rep(i, mid) {
		temp[a[i]-1] = '*';
	}
	// cout << temp << endl;
	rep(i, n) {
		if (temp[i] == t[ctr])
			ctr++;
		if (ctr == p)
			return true;
	}
	return false;
}

int main() {
	off;

	cin >> s >> t;
	n = s.length();
	p = t.length();
	rep(i, n) {
		cin >> a[i];
	}

	int low = 0;
	int high = n;
	int mid = (high+low) >> 1;
	bool pos;

	while (high - low > 1) {
		// cout << mid << endl;
		if (check(mid)) {
			low = mid;
		}
		else {
			high = mid;
		}
		mid = (low + high)/2;
	}

	cout << mid << endl;

  	return 0;
}