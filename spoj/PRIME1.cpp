/**
 * Problem URL : http://www.spoj.com/problems/PRIME1/
 * Author : Aman Pratap Singh
 * Language : C++
 * Compiler : G+
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t;
    
    cin >> t;
    
    while(t--) {
        int m, n;
        cin >> m >> n;
        
        bool prime[n];
        
        memset(prime, true, sizeof(prime));
        
        prime[1] = false;
        prime[0] = false;
        
        for(int p = 2; p*p < n; p++) {
            if(prime[p] == true) {
                for(int i = p*p; i <= n; i += p) {
                    prime[i] = false;
                }
            }
        }
        
        for(int i = m; i <= n; i++) {
            if(prime[i]) {
                cout << i << endl;
            }
        }
        
        cout << endl;
    }
}

