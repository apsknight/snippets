#include <iostream>

using namespace std;

int main() {
    int n, k, res = 0;
    
    cin >> n >> k;
    
    while(n--){
        int m;
        cin >> m;
        if (m%k == 0)
            res++;
    }
    cout << res << endl;
    return 0;
}