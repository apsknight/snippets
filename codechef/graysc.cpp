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
	int n;
	cin >> n;
	unsigned long long a[n+7];
 
	if (n >= 130) {
		cout << "Yes" << endl;
		return 0;
	}
 
	rep(i, n) {
		cin >> a[i];
	}
 
	for(int i = 0; i < n-3; i++) {
		for(int j = i + 1; j < n-2; j++) {
			for(int k = j + 1; k < n-1; k++) {
				for(int l = k + 1; l < n; l++) {
					if ((a[i]^a[j]^a[k]^a[l]) == 0) {
						cout << "Yes" << endl;
						return 0;
					}
				}
			}
		}
	}
 
	cout << "No" << endl;
  	return 0;
} 