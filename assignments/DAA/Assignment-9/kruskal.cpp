/**
 * Aman Pratap Singh
 * 16CS01011, Design and Analysis of Algorithm
 */

#include <bits/stdc++.h>
using namespace std;

class disjoint_set{
private:
    vector<int> sets;
    vector<int> weight;    

public:
    disjoint_set(int n) {
        sets.resize(n);
        weight.resize(n);
        for(int i = 0; i < n; i++) {
            sets[i] = i;
            weight[i] = 1;      
        }
    }

    bool find(int i, int j) {
        return sets[i] == sets[j];
    }
    void union_set(int i, int j) {
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
};

int main() {
    int V, E;
    cin >> V >> E;

    vector< pair<int, pair<int, int> > > edge(E);
    
    for(int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edge[i] = make_pair(w, make_pair(u, v));
    }

    sort(edge.begin(), edge.end());
    disjoint_set dset(E);
    int cost = 0;
    for(auto i : edge) {
        // cout << i.second.first << " " << i.second.second << " " << dset.find(i.second.first, i.second.second) << endl;
        if (!dset.find(i.second.first, i.second.second)) {
            cost += i.first;
            dset.union_set(i.second.first, i.second.second);
            cout << i.second.first << "~" << i.second.second << ":" <<  i.first << endl;
        }
    }
    cout << "Cost of MST: " << cost << endl;
}