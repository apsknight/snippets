#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define repeat(i, n) for(int i = 0; i < n; i++)


int main() {
	ios_base::sync_with_stdio(0);
  	cin.tie(0);

  	int a[100000];

  	int n, h;
  	cin >> n >> h;

  	repeat(i, n) {
  		cin >> a[i]; 
  	}

  	unsigned int x, i = 0, cr = 0;;

  	while(cin >> x) {
  		if (x == 1) {
  			if(i != 0)
  				i--;
  		}
  		else if (x == 2) {
  			if(i != n-1)
  				i++;
  		}
  		else if (x == 3) {
  			if(a[i] != 0 && cr == 0) {
  				a[i]--;
  				cr = 1;
  			}
  		}
  		else if (x == 4) {
  			if(a[i] != h && cr == 1) {
  				a[i]++;
  				cr = 0;
  			}
  		}
  		else if (x == 0) {
  			break;
  		}
  	}

  	repeat(i, n) {
  		cout << a[i] << " ";
  	}

  	cout << "\n";

  	return 0;
}