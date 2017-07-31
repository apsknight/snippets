#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long c, d, l;
        cin >> c >> d >> l;
        
        l -= (d*4);
        
        if(l >= 0 && l % 4 == 0 && l <= c * 4 && l >= (c*4 - d*8))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}