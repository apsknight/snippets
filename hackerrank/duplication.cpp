#include <bits/stdc++.h>

using namespace std;

int duplication(int x){
    // Complete this function
    int i = 0;
    while (x != 0) {
	    i = i + x&1;
	    x = x>>2;
    }
    i = i&1;
    return i;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        cin >> x;
        int result = duplication(x);
        cout << result << endl;
    }
    return 0;
}
