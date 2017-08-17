/***
 *                                    _____           _                 _____ _             _     
 *      /\                           |  __ \         | |               / ____(_)           | |    
 *     /  \   _ __ ___   __ _ _ __   | |__) | __ __ _| |_ __ _ _ __   | (___  _ _ __   __ _| |__  
 *    / /\ \ | '_ ` _ \ / _` | '_ \  |  ___/ '__/ _` | __/ _` | '_ \   \___ \| | '_ \ / _` | '_ \ 
 *   / ____ \| | | | | | (_| | | | | | |   | | | (_| | || (_| | |_) |  ____) | | | | | (_| | | | |
 *  /_/    \_\_| |_| |_|\__,_|_| |_| |_|   |_|  \__,_|\__\__,_| .__/  |_____/|_|_| |_|\__, |_| |_|
 *  16CS01011, Github: @apsknight                             | |                      __/ |      
 *  Indian Institute of Techology Bhubaneswar                 |_|                     |___/       
 *  https://github.com/apsknight/snippets/tree/master/assignments/10%20August%202017
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

// Counter for inversions
int total = 0;
// Auxiliary array for merging
int aux[1000];

// Function for Conquering
void join(int* a, int low, int high) {
	int mid = (low + high) >> 1;
	int k = 0, i, j;
	// debug(low);
	// debug(high);
	// debug(mid);
	for(i = low, j = mid + 1; i < mid + 1 && j < high + 1;) {
		if (a[i] > a[j]) {
			aux[k] = a[j];
			// cout << i << " " << a[i] << " " << j << " " << a[j] << " " << mid << endl;
			j++;
			k++;
			total += mid - i + 1;
		}
		else {
			aux[k] = a[i];
			i++;
			k++;
		}
	}
	// debug(i);
	// debug(j);

	while(i < mid+1) {
		aux[k] = a[i];
		k++;
		i++;
	}
	while(j < high+1) {
		aux[k] = a[j];
		j++;
		k++;
	}

	rep(z, k) {
		a[z+low] = aux[z];
	}
}

// Function for Dividing
void half(int* a, int low, int high) {
	if (high <= low) {
		return;
	}
	int mid = (low + high) >> 1;
	half(a, low, mid);
	half(a, mid+1, high);
	join(a, low, high);
	// debug('half');
}

int main() {
	off;
	int a[100007];
	test {
		int n;
		cin >> n;
		rep(i, n) {
			cin >> a[i];
		}

		half(a, 0, n-1);
		// rep(i, n) {
		// 	cout << a[i] << " ";
		// }
		// cout << endl;
		cout << total << endl;
	}
  	return 0;
}
