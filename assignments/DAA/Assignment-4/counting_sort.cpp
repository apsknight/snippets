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

void counting_sort(int* a, int n) {
    int op[n];
    int temp[99999];
    memset(op, 0, sizeof op);
    memset(temp, 0, sizeof temp);
    rep(i, n) {
        temp[a[i]]++;
    }
    fogg(i, 1, 99998) {
        temp[i] += temp[i-1];
    }
    rep(i, n) {
        op[temp[a[i]]-1] = a[i];
        temp[a[i]]--;
    }
    rep(i, n) {
        a[i] = op[i];
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];
    rep(i, n) {
        cin >> a[i];
    }

    counting_sort(a, n);

    rep(i, n) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}