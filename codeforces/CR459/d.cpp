// أمان براتاب سينغ
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string st;
typedef vector<int> vi;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define fogg(i,a,b) for(int i = (a); i <= (b); ++i)
#define ford(i,a,b) for(int i = (a); i >= (b); --i)
#define test int t; cin >> t; while(t--)
#define endl '\n'
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD 1000000007

int dp[110][110][160];
vector< pair<int, int> > g[110];

int solve(int n, int m, int ch) {
    int ans = 0;
    if (dp[n][m][ch] != -1) return dp[n][m][ch];

    for(int i = 0; i < g[n].size(); i++) {
        if (ch <= g[n][i].second && !solve(m, g[n][i].first, g[n][i].second)) {
            return dp[n][m][ch] = 1;
        }
    }
    
    return dp[n][m][ch] = 0;
}

int main() {
    off;
    memset(dp, -1, sizeof dp);
    int n, m;
    cin >> n >> m;

    int a, b;
    char c;
    rep(i, m) {
        cin >> a >> b >> c;
        g[a].push_back(make_pair(b, (int)c));
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if (solve(i, j, 0)) {
                cout << 'A';
            }
            else {
                cout << 'B';
            }
        }
        cout << endl;
    }

    return 0;
}