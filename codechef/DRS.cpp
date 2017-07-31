/**
 * Problem URL : https://www.codechef.com/LOCAPR17/problems/DRS
 * Author : Aman Pratap Singh
 * Language : C++
 * Compiler : G+
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
        
        vector<double> vec(n);
        
        for(int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        
        int res = 0;
        int arr[6] = {0};
        
        for(int i = 0; i < n; i++) {
            int tep = (int) vec[i] / 80;
            arr[tep]++;
        }
        
        for(int i = 0; i < 6; i++) {
            if (arr[i] >= 2)
                res += 2;
            else
                res += arr[i];
        }
        
        cout << res << endl;
    }
}

  