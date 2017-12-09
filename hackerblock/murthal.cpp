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
	int n, c;
	cin >> c >> n;
	ll a[100007];
	rep(i, n) {
		cin >> a[i];
	}
	sort(a, a+n);
	ll high = INT_MAX;
	ll low = 0;
	ll mid = (high + low) / 2;
	int temp = 0;
	while(low < high) {
		temp = 0;
		// int i = 0, j = 1;
		// while(j < n) {
		// 	if(a[j] - a[i] >= mid) i = j++, temp++;
		// 	else j++;
		// }
				// debug(low);
		// debug(high);
		rep(i, n) {
			temp += (sqrt(1 + (8*mid)/a[i]) - 1) / 2;
		}
		if (temp >= c) {
			high = mid;
		}
		else if (temp < c) {
			low = mid+1;
		}

		// debug(mid);
		// debug(temp);
		mid = (high + low) / 2;
	}

	cout << mid << endl;
  	return 0;
}