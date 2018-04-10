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
    char bp[l1+1][l2+1];
    memset(dp, 0, sizeof dp);
    
    for(int i = 0; i <= l1; i++) {
        dp[i][0] = i;
    }
    for(int i = 0; i <= l2; i++) {
        dp[0][i] = i;
    }

    for(int i = 1; i <= l1; i++) {
        for(int j = 1; j <= l2; j++) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1];
                bp[i][j] = 'S';
            }
            else {
                dp[i][j] = 1 + min(dp[i-1][j-1] + 1, min(dp[i][j-1], dp[i-1][j]));
                if (dp[i][j] == dp[i-1][j-1] + 2) bp[i][j] = 'R';
                else if (dp[i][j] == dp[i][j-1]+1) bp[i][j] = 'I';
                else bp[i][j] ='D';
            }
        }
    }
    for(int i = 0; i < l1+1; i++) {
        for(int j = 0; j < l2+1; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    while(l2 != 0 && l1 != 0) {
        cout << bp[l1][l2] << endl;
        if (bp[l1][l2] == 'S' || bp[l1][l2] == 'R') l1--, l2--;
        else if (bp[l1][l2] == 'D') l1--;
        else l2--;
    }

    cout << "Total Cost: " << dp[s1.length()][s2.length()] << endl;
}