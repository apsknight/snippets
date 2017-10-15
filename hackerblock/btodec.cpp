#include<iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[100007];
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int m;
    c
    for(int i = 0; i < m; i++) {
        int p, k;
        cin >> p >> k;
        
        int t = upper_bound(a, a+n, p) - a;
        // if (t == -1 && k == 0) {
        //     cout << Yes << endl;
        // }
        if (k == t + 1) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}