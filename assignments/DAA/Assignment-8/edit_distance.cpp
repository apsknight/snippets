/**
 * Aman Pratap Singh
 * 16CS01011, Design and Analysis of Algorithms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int l1 = s1.length();
    int l2 = s2.length();
    
    int dp[l1+1][l2+1];
    
    memset(dp, 0, sizeof dp);
    
    for(int i = 0; i < l1; i++) {
        dp[i][0] = i;
        dp[0][i] = i;
    }
    
    for(int i = 1; i <= l1; i++) {
        for(int j = 1; j <= l2; j++) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            }
            else {
                dp[i][j] = min(dp[i-1][j-1] + 2, min(dp[i][j-1] + 1, dp[i][j-1] + 1));
            }
        }
    }
    
    cout << dp[l1][l2] << endl;
}