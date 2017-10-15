#include <iostream>
using namespace std;

int a[25] = {0};
int b[25] = {0};

void factorial(int n)
{
    int M = 107;
    
    int f = 1;
    for (int i = 2; i <= n; i++) {
        f = (f*i) % M;
        a[i] = f;
    }
        

}

int main() {
    a[0] = 1;
    a[1] = 1;
    int n;
    cin >> n;
    
    int max = -1;
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] > max) {
            max = b[i];
        }
    }
    
    factorial(max);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[b[i]];
    }
    
    cout << ans % 107 << "\n";
}