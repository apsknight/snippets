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

int rmq(int* st, int lo, int hi, int qlo, int qhi, int ind) {
	if (qlo <= lo && qhi >= hi)
		return st[ind];
	if (hi < qlo || lo > qhi)
		return INT_MAX;

	int mid = lo + (hi - lo) / 2;

	return min(rmq(st, lo, mid, qlo, qhi, 2*ind + 1), rmq(st, mid+1, hi, qlo, qhi, 2*ind + 2));
}
int construct(int* a, int* st, int lo, int hi, int ind) {
	if (lo == hi) {
		st[ind] = a[lo];
		// debug(ind);
		// debug(lo);
		// debug(a[lo]);
		return a[lo];
	}

	int mid = lo + (hi-lo) / 2;
	// debug(lo);
	// debug(hi);
	// debug(mid);
	st[ind] = min(construct(a, st, lo, mid, 2*ind + 1), construct(a, st, mid+1, hi, 2*ind + 2));
	// debug(ind);
	// debug(st[ind]);
	return st[ind];
}

int main() {
	off;
	ll n;
	cin >> n;
	int a[n];

	rep(i, n) {
		cin >> a[i];
	}
	int x = (int)(ceil(log2(n))); 
	int stsz = 2*(int)pow(2, x) - 1;
	// debug(stsz);
	int st[stsz];
	memset(st, 0, sizeof(st));
	construct(a, st, 0, n-1, 0);

	// rep(i, stsz) {
	// 	cout << st[i] << " ";
	// }
	// cout << endl;

	test {
		ll p, q;
		cin >> p >> q;
		cout << rmq(st, 0, n-1, p, q, 0) << endl;
	}
  	return 0; 
}