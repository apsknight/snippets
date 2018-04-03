/**
 * Aman Pratap Singh
 * 16CS01011, Design and Analysis of Algorithm
 */

#include <bits/stdc++.h>
using namespace std;

int root(vector<int> sets, int i) {
    while(sets[i] != i) {
        // sets[i] = sets[sets[i]];
        i = sets[i];
    }
    return i;
}

bool find(vector<int>& sets, int i, int j) {
    cout << root(sets, i) << " " << root(sets, j) << endl;
    return root(sets, i) == root(sets, j);
}

void union_set(vector<int>& sets, vector<int>& weight, int i, int j) {
    // if (weight[i] > weight[j]) {
    //     swap(i, j);
    // }
    sets[root(sets, i)] = sets[j];
}

int main() {
    int n; cin >> n;
    vector<int> sets(n);
    vector<int> weight(n);

    for(int i = 0; i < n; i++) {
        sets[i] = i;
    }
    for(int i = 0; i < n; i++) {
        weight[i] = i + 1;
    }

    int query;
    cin >> query;

    for(int i = 0; i < query; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x & 1) {
            if (find(sets, y, z)) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            union_set(sets, weight, y, z);
        }
    }
}