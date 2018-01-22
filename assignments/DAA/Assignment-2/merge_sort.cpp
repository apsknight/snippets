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

void merge(int* a, int start, int end) {
    int mid = (start + end) / 2;
    int aux[end-start+1];

    int i = 0, j = start, k = mid + 1;

    while (j <= mid && k <= end) {
        if (a[j] < a[k]) {
            aux[i++] = a[j++];
        }
        else {
            aux[i++] = a[k++];
        }
    }

    while (j <= mid) {
        aux[i++] = a[j++];
    }
    while (k <= end) {
        aux[i++] = a[k++];
    }

    fogg(i, start, end) {
        a[i] = aux[i - start];
    }

    return;
}

void mergesort(int* a, int start, int end) {
    if (start >= end) return;

    int mid = (start + end) / 2;
    mergesort(a, start, mid);
    mergesort(a, mid+1, end);
    merge(a, start, end);
}

int main() {
    off;
    int n;
    cin >> n;

    int a[n];
    rep(i, n) {
        cin >> a[i];
    }

    mergesort(a, 0, n-1);

    rep(i, n) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}