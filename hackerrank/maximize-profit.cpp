/**
*	Aman Pratap Singh (@apsknight, </www.amanpratapsingh.in>)
*	Indian Institute of Technology Bhubaneswar 
*/
#include <bits/stdc++.h>

using namespace std;

int maximizeProfit(vector <int> a, vector <int> b, int m, int k, int n) {
	int mx = m*k;
	for (int i = 0; i < n; i++) {
		if (m * a[i] * b[i] > mx) mx = m * a[i] * b[i];
	}

	return mx;
}

int main() {
    int n;
    int m;
    int k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(n);
    for(int b_i = 0; b_i < n; b_i++){
       cin >> b[b_i];
    }
    int result = maximizeProfit(a, b, m, k, n);
    cout << result << endl;
    return 0;
}