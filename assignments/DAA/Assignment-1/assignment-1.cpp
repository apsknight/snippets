/***
 *	Aman Pratap Singh
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

bool binarysearch(vector<int> array, int key) {
	int lo = 0;
	int hi = array.size() - 1;
	int mid = (lo + hi) / 2;
	
	while(lo <= hi) {
		if (array[mid] == key) return true;
		else if (array[mid] < key) lo = mid + 1;
		else if (array[mid] > key) hi = mid - 1;
		mid = (lo + hi) >> 1;
	}

	return false;
}

int main() {	
	int n;
	scanf("%i", &n);
	vector<int> v(n);
	rep(i, n) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int k;
	scanf("%i", &k);
	if (binarysearch(v, k)) printf("Key is Present\n");
	else printf("Key is not present\n");

  	return 0;
}