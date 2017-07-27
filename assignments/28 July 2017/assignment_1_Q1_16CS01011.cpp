/**
*	Aman Pratap Singh (Github: @apsknight/snippets/)
*	16CS01011, Indian Institute of Technology Bhubaneswar 
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
#define mx 100000

int maxIndex(int* a, int n) {
	int mxx = -1;
	int res = 0;
	rep(i, n) {
		if (mxx < a[i]) {
			mxx = a[i];
			res = i;
		}
	}

	return res;
}

int main() {
	off;
	int arr[mx];
	int n;

	test {
		cin >> n;

		rep(i, n) {
			cin >> arr[i];
		}

		rep(i, n-1) {
			// debug(maxIndex(arr, n-i));
			reverse(arr, arr + maxIndex(arr, n-i) + 1);
			reverse(arr, arr + n-i);
		}

		rep(i, n) {
			cout << arr[i] << " ";
		}

		cout << endl;
	}

  	return 0;
}