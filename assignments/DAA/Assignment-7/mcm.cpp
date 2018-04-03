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
    int matrix[] = {10, 12, 40, 60, 40, 80};
    int n = 5+1;

    int mat[n][n];

    rep(i, n) {
        rep(j, n) {
            if (i == j) mat[i][j] = 0;
            else {
                mat[i][j] = INT_MAX;
            }
        }
    }
    fogg(i, 2, n-1) {
        fogg(j, 1, n-1) {
            int l = i + j - 1;
            fogg(k, j, l - 1) {
                int q = mat[j][k] + mat[k+1][l] + matrix[j-1]*matrix[k]*matrix[l];
                if (q < mat[j][l]) mat[j][l] = q;
            }
        }
    }
    
    cout << mat[1][n-1] << endl;
}