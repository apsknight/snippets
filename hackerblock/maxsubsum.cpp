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

int midsum(int* a, int lo, int hi) {
    int temp = 0;
    int left = INT_MIN;
    int mid = (lo + hi) / 2;
    for (int i = mid; i >= lo; i--) {
        temp = temp + a[i];
        if (temp > left) left = temp;
    }

    temp = 0;
    int right = INT_MIN;
    for (int i = mid + 1; i <= hi; i++)
    {
        temp = temp + a[i];
        if (temp > right) right = temp;
    }
 
     return left + right;
}

int dac(int* a, int lo, int hi) {
	if (lo == hi)
		return a[lo];

	int mid = (lo + hi) / 2;
	int s1 = dac(a, lo, mid);
	int s2 = dac(a, mid + 1, hi);
	int s3 = midsum(a, lo, hi);

	return max(s1, max(s2, s3));
}

int main() {
	// off;
	test {
		int n;
		cin >> n;
		int a[n];

		rep(i, n) {
			cin >> a[i];
		}

		cout << dac(a, 0, n-1) << endl;
	}

  	return 0;
}