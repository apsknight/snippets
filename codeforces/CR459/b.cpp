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

int main() {
    off;
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> mp;

    st a, b;
    rep(i, n) {
        cin >> a >> b;
        mp[b] = a;
    }
    rep(i, m) {
        cin >> a >> b;
        st c = "";
        rep(i, b.length() - 1) {
            c += b[i];
        }
        cout << a << " " << b << " #" << mp[c] << endl;
    }

    return 0;
}