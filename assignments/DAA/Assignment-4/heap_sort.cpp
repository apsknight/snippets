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

void heapify(int* a, int n, int i) {
    int left = 2*i + 1;
    int right = 2*i + 2;
    int large = i;
    if (a[left] > a[large] && left < n) {
        large = left;
    }
    if (a[right] > a[large] && right < n) {
        large = right;
    }

    if (large != i) {
        swap(a[large], a[i]);
        heapify(a, n, large);
    }
}

void heapsort(int* a, int n) {
    for(int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }

    for(int i = n-1; i >= 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main() {
    off;
    int n;
    cin >> n;
    int a[n];

    rep(i, n) {
        cin >> a[i];
    }

    heapsort(a, n);

    rep(i, n) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}