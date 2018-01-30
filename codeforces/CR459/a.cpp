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
    int n;
    cin >> n;

    int a[1500];
    memset(a, 0, sizeof a);
    a[1] = 1;
    a[2] = 1;
    a[3] = 1;
    int l = 2, r = 3;
    while(l +r < 1000) {
        a[l+r] = 1;
        swap(l, r);
        r = l + r;
    }
    st ans = "";
    fogg(i, 1, n) {
        if (a[i] == 1) {
            ans += 'O';
        }
        else {
            ans += 'o';
        }
    }

    cout << ans << endl;

    return 0;
}