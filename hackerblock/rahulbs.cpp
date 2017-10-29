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

int search(vector<ll> arr, int l, int h, int key) {
    if (l > h) return -1;
 
    int mid = (l+h)/2;
    if (arr[mid] == key) return mid;
 
    if (arr[l] <= arr[mid])	{
        if (key >= arr[l] && key <= arr[mid])	return search(arr, l, mid-1, key);

        return search(arr, mid+1, h, key);
    }

    if (key >= arr[mid] && key <= arr[h])
        return search(arr, mid+1, h, key);
 
    return search(arr, l, mid-1, key);
}

int main() {
	off;
	ll n;
	cin >> n;
	vector<ll> a(n);

	rep(i, n) {
		cin >> a[i];
	}

	ll key;
	cin >> key;

	cout << search(a, 0, n-1, key) << endl;
  	return 0;
}