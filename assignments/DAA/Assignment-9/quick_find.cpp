/**
 * Aman Pratap Singh
 * 16CS01011, Design and Analysis of Algorithm
 */

#include <bits/stdc++.h>
using namespace std;

bool find(vector<int>& sets, int i, int j) {
    return sets[i] == sets[j];
}

void union_set(vector<int>& sets, vector<int>& weight, int i, int j) {
    if (weight[i] > weight[j]) {
        swap(i, j);
    }
    for(int c = 0; c < sets.size(); c++) {
        if (sets[c] == sets[i]) {
            sets[c] = sets[j];
            weight[c] += weight[j];
        }
        if (sets[c] == sets[j]) {
            weight[c] += weight[i];
        }
    }
}

int main() {
    int n; cin >> n;
    vector<int> sets(n);
    vector<int> weight(n);

    for(int i = 0; i < n; i++) {
        sets[i] = i;
    }
    for(int i = 0; i < n; i++) {
        weight[i] = 1;
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