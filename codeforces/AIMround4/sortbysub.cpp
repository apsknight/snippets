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
int a[100007];
int sa[100007];
int vis[100007];
vector<int> v[100007];
bool cmp(int x, int y) {
	return a[x] < a[y];
}
int main() {
	off;
	memset(vis, 0, sizeof(vis));
	ll n;
	cin >> n;

	fogg(i, 1, n) {
		cin >> a[i];
		sa[i] = i;
	}

	sort(sa+1, sa+n+1, cmp);
	// rep(i, n) {
	// 	cout << sa[i];
	// }
	// cout << endl;
	ll ans = 0;
	fogg(i, 1, n) {
		if(!vis[i]) {
			ans++;
			vis[i] = 1;
			v[ans].push_back(i);
			for(int x = sa[i]; x != i; x = sa[x]) {
				v[ans].push_back(x);
				debug(x);
				vis[x] = 1;
			}
		}
	}

	cout << ans << endl;


	fogg(i, 1, ans) {
		cout << v[i].size() << " ";
		fogg(j, 1, v[i].size()) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
  	return 0;
}