#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, p;
    string s;
    cin >> n >> k >> p;
    
    vector<int> bset(n);
    
    for(int i = 0; i < n; i++) {
        cin >> bset[i];
    }
    
    cin >> s;
    
    int counter = 0;
    for(int i = 0; i < p; i++) {
        if (s[i] == '!') {
            counter++;
        }
        else if (s[i] == '?') {
            rotate(bset.rbegin(), bset.rbegin() + counter, bset.rend());
            counter = 0;
            int res = 0;
            for(int j = 0; j < n; j++) {
                int temp = count(bset.begin() + j, bset.begin() + j + k, 1);
                res = max(res, temp);
            }
            cout << res << "\n";
        }
    }
    
    return 0;
}