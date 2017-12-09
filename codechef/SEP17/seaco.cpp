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
#define MOD 1000000007
 
int main() {
	off;
	test {
		vector< pair< ll, pair< ll, ll> > > v(100007);
		ll n, m;
		cin >> n >> m;
 
		ll type, l, r;
		fogg(query, 1, m) {
			cin >> type >> l >> r;
			v[query] = (make_pair(type, make_pair(l, r)));
		}
 
		ll it = m;
		vector<ll> tree(100007);
		vector<ll> multiplier(100007);
 
		for(; it > 0; --it) {
			ll temp = 0;
			ll idx = it;
		    while (idx > 0) {
		        temp -= multiplier[idx];
		        idx -= idx & (-idx);
		    }
		    temp = temp % 1000000007;
			if (v[it].first == 1) {
				tree[v[it].second.first] += temp + 1;
				if(v[it].second.second != n)
					tree[v[it].second.second + 1] -= (temp + 1);
			}
			else if (v[it].first == 2) {
				ll index = v[it].second.first;
			    while (index <= m) {
			        multiplier[index] += (1+temp);
			        index += index & (-index);
			    }
			    index = v[it].second.second + 1;
			    while (index <= m) {
			        multiplier[index] -= (1+temp);
			        index += index & (-index);
			    }
			}
		}
		fogg(i, 1, n) {
			tree[i] += tree[i-1];
			cout << tree[i] % 1000000007 << " ";
		}
		cout << endl;
	}
  	return 0;
}   