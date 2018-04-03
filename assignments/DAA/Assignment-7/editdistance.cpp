#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string st;
typedef vector<int> vi;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define fogg(i,a,b) for(int i = (a); i <= (b); ++i)
#define ford(i,a,b) for(int i = (a); i >= (b); --i)
#define test int t; cin >> t; while(t--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mxx (int) 1e9+7

int main() {
    st a, b;
    cin >> a >> b;
    int n = a.length();
    int m = b.length();

    int dp[n+1][m+1];

    rep(i, m+1) {
        dp[0][i] = i;
    }

    rep(i, n+1) {
        dp[i][0] = i;       
    }

    fogg(i, 1, n) {
        fogg(j, 1, m) {
            if (a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = min(dp[i-1][j] + 1, dp[i][j-1] + 1);
        }
    }

    cout << dp[n][m] << endl;
}