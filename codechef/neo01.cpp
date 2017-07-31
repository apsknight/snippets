/**
*	Aman Pratap Singh (@apsknight)
*	Indian Institute of Technology Bhubaneswar
*	www.apsknight.cf
*/
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
#define rep(i, n) for(int i = 0; i < n; i++)
#define test int t; cin >> t; while(t--)
#define fogg(i,a,b) for(int i = (a); i <= (b); i++)
#define ford(i,a,b) for(int i = (a); i >= (b); i--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MP make_pair
#define PB push_back
#define MOD 1e9+7
#define PI 3.1415926535897932384626433832795
 
bool cmp (int a, int b) {
	return a > b;
}
int main() {
	off;
	//int a[100000];
	ll b[100000];
	test {
		ll n;
		cin >> n;
		ll plus = 0, neg = 0, temp;
 
		rep(i, n) {
			cin >> temp;
 
			if(temp > 0) {
				plus += temp;
			}
 
			else {
				b[neg] = temp;
				neg++;
			}
		}
		ll ctr = n - neg;
		plus = plus * ctr;
 
		sort(b, b+neg, cmp);
 
		if (ctr > 0) {
			rep(i, neg) {
				if((plus/ctr+b[i]) * (ctr + 1) > plus + b[i]) {
					plus = (plus/ctr+b[i]) * (ctr + 1);		
					ctr++;
				}
 
				else {
					plus = plus + b[i];
				}
			}
		}
 
		else {
			rep(i, neg) {
				plus = plus + b[i];
			}
		}
			
		cout << plus << "\n";
	}
 
  	return 0;
} 