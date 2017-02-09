#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        string s;
        
        cin >> s;
        
        int len = s.length();
        int c1 = 0, c2 = 0;
        
        for (int i = 0; i < len; i++) {
            if (i % 2 == 0) {
                if(s[i] != '+')
                {
                    c1++;
                }
            }
            
            else {
                if(s[i] != '-')
                {
                    c1++;
                }
            }
                
        }
        
        for (int i = 0; i < len; i++) {
            if (i % 2 == 0) {
                if(s[i] != '-')
                {
                    c2++;
                }
            }
            
            else {
                if(s[i] != '+')
                {
                    c2++;
                }
            }
                
        }
        
        if (c1 <= c2)
            cout << c1 << endl;
            
        else 
            cout << c2 << endl;
    }
    
    return 0;
}