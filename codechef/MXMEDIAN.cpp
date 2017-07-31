#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        
        cin >> n;
        
        int a[2*n];
        
        for(int i = 0; i < 2*n; i++) {
            cin >> a[i];
        }
        
        sort(a, a + 2*n);
        
        int median = a[2*n-(n+1)/2];
        cout << median << endl;
        
        for(int i = 0; i < n; i++){
            cout << a[i] << " " << a[n + i] << " ";
        }
        
        cout << endl;
    }
    return 0;
}