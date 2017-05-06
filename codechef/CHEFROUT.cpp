#include <iostream>

using namespace std;

int main() {
    int t;
    
    cin >> t;
    
    while(t--) {
        string s;
        
        cin >> s;
        
        int n = s.length();
        int ctr = s[0];
        int i;
        for(i = 0; i < n; i++) {
            if(ctr > s[i]) {
                cout << "no" << endl; 
                ctr = -1;
                break;
            }
            else
                ctr = s[i];
        }
        
        if(ctr != -1)
            cout << "yes" << endl;
    }
    return 0;
}