/**
 * Problem URL : hhttps://www.codechef.com/MAY17/problems/UNICOURS
 * Author : Aman Pratap Singh
 * Language : C++
 * Compiler : G+
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int a[n];
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int res = 1, i = n - 1, q = 0;
        
        for(int i  = n-1; i > q + 1; i--){
            if (a[i] < i)
                res++;
                
            if(q < a[i] - 1)
                q = a[i] - 1;
        }
        
        cout << res << endl;
    }
    return 0;
}