/**
 * Problem URL : https://www.codechef.com/LOCAPR17/problems/LOC171
 * Author : Aman Pratap Singh
 * Language : C++
 * Compiler : G++
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        
        int res = 0;
        
        int i = 0;
        while(i < n){
            int temp = 1;
            while(vec[i+1] == vec[i]){
                temp++;
                i++;
            }
            i++;
            int ctr = 0;
            while(ctr != temp) {
                res += temp - ctr;
                ctr++;
            }
        }
        
        
        
        cout << res << endl;
    }
    
    return 0;
}