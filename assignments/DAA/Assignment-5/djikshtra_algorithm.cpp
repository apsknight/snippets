/* 
 * Aman Pratap Singh, 16CS01011
 * Djikshtra's Shortest Path Algorithm
 * Design and Analysis of algorithms
 */

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    unordered_map<T, list< pair<T, int> > > adjList;
public:
    void addEdge(T u, T v, int weight, bool bidir = true) {
        adjList[u].push_back(make_pair(v, weight));
        if (bidir) {
            adjList[v].push_back(make_pair(u, weight));            
        }
    }

    void djikshtra(T src, T dest) {
        unordered_map<T, int> dist;
        unordered_map<T, T> parent;
        for (auto j: adjList) {
            dist[j.first] = INT_MAX;
            parent[j.first] = src;
        }

        priority_queue<pair <int, T> > p;
        dist[src] = 0;
        p.push(make_pair(dist[src], src));

        while(!p.empty()) {
            T node = p.top().second;
            p.pop();
            for(auto neighbour: adjList[node]) {
                if (dist[neighbour.first] > dist[node] + neighbour.second) {
                    dist[neighbour.first] = dist[node] + neighbour.second;
                    parent[neighbour.first] = node;
                    p.push(make_pair(dist[neighbour.first], neighbour.first));
                }
            }
        }
        stack<T> s;
        T node = dest;
        s.push(node);
        while(node != src) {
            node = parent[node];
            s.push(node);
        }
        while(!s.empty()) {
            T node = s.top();
            cout << node << "-->";
            s.pop();
        }
        cout << "Distance Covered: " << dist[dest] << endl;
    }
};

int main() {
    Graph<char> g;

    g.addEdge('A', 'B', 5);
    g.addEdge('A', 'D', 9);
    g.addEdge('A', 'E', 2);
    g.addEdge('B', 'C', 2);
    g.addEdge('C', 'D', 3);
    g.addEdge('E', 'F', 3);
    g.addEdge('D', 'F', 2);

    g.djikshtra('A', 'D');

    return 0;
}