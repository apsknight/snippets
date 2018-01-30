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

st s;

int main() {
    cin >> s;
    int n = s.length();

    bool foo[n][n];
    bool bar[n][n];

    memset(foo, false, sizeof foo);
    memset(bar, false, sizeof bar);

    rep(l, n) {
        bool ok = true;
        int cur = 0;
        for(int r = l; r < n; r++) {
            if (s[r] == ')') cur--;
            else cur++;
            if (cur < 0) ok = false;
            foo[l][r] = ok;
        }
    }

    rep(r, n) {
        bool ok = true;
        int cur = 0;
        for(int l = r; l >= 0; l--) {
            if (s[l] == '(') cur--;
            else cur++;
            if (cur < 0) ok = false;
            bar[l][r] = ok;
        }
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if (foo[i][j] && bar[i][j] && ((j-i+1) % 2) == 0) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}