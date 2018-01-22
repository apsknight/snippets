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
#define else if elif
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD 1000000007

int partition(int* a, int start, int end) {
    int i = start-1;

    fogg(j, start, end-1) {
        if (a[j] < a[end]) {
            swap(a[j], a[++i]);
        }
    }
    swap(a[end], a[++i]);
    return i;
}

void quicksort(int* a, int start, int end) {
    if (start >= end) return;

    int pivot = partition(a, start, end);
    quicksort(a, start, pivot-1);
    quicksort(a, pivot+1, end);
}

int main() {
    off;
    int n;
    cin >> n;
    int a[n];
    
    rep(i, n) {
        cin >> a[i];
    }

    quicksort(a, 0, n-1);

    rep(i, n) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}