/**
*	Aman Pratap Singh (@apsknight, </www.amanpratapsingh.in>)
*	Indian Institute of Technology Bhubaneswar 
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
		ll n, m;
		cin >> n >> m;
		ll minSalary[1007];
		ll offeredSalary[1007];
		ll maxJobOffers[1007];
		st qual[1007];

		rep(i, n) {
			cin >> minSalary[i];
		}

		rep(i, m) {
			cin >> offeredSalary[i];
			cin >> maxJobOffers[i];
		}

		rep(i, n) {
			cin >> qual[i];
		}
		ll len, ind;
		ll placement[1007] = {0};
		ll salary = 0;
		rep(i, n) {
			len = qual[i].length();
			ind = 1006;
			rep(j, len) {
				if (qual[i][j] == '1' && (offeredSalary[j] >= minSalary[i]) && placement[j] < maxJobOffers[j]) {
					// placement[j]++; 
					// salary += offeredSalary[j];
					if (offeredSalary[ind] <= offeredSalary[j])
						ind = j;
				}
			}
			if (ind != 1006) {
				placement[ind]++;
				salary += offeredSalary[ind];
			}
		}

		ll offers = 0, zero = 0;

		rep(i, m) {
			if (placement[i] == 0)
				zero++;
			else
				offers += placement[i];
		}

		cout << offers << " " << salary << " " << zero << endl;
	}

  	return 0;
}