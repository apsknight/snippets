#include <iostream>

using namespace std;

long permutation(int n, int r = 2);
//long fact(long z);

int main() {
    int t;
    
    cin >> t;
    
    while (t--) {
        int m, n;
        
        cin >> m >> n;
        
        //cout << permutation(m*n,2) - 2*((2(m-4) + 4)(n-1) + (2(m-2) + 2)(n-2)) << endl;
        //Simplified
        if (n == 1 || m == 1)
        cout << permutation(m*n) << endl; 
        
        else
        cout << permutation(m*n) -  4*((m - 2)*(n - 1) + (m - 1)*(n - 2)) << endl;
        
    }
}

/**
    long fact(long z) {
    int r = 1;
    while(z > 1)
    {
        r = r * z;
        z--;
    }
    
    return r;
}

**/

long permutation(int n, int r) {
    return n * (n-1);
}

