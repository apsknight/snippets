#include <iostream>
#include <vector>
using namespace std;
int main() {
    unsigned long long sz = 99999999;
    int n;
    cin >> n;
    vector<bool> sieve(sz);
    
    for(int i = 2; i*i <= sz; i++) {
        if (sieve[i] == false) {
            for(int j = i + i; j <= sz; j += i) {
                sieve[j] = true;
                // cout << j << endl;
            }
        }
    }
    
    for(int i = 2; i < sz; i++) {
        // cout << n << endl;
        if (sieve[i] == false)
            n--;
    
        if (n == 0) {
            cout << i << endl;
            return 0;
        }
    }
}