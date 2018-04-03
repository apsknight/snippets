#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    int V, E;
    double p;
    unordered_map<T, list< pair<T, int> > > adjList;
public:
    void addEdge(T u, T v, int weight, bool bidir = true) {
        adjList[u].push_back(make_pair(v, weight));
        if (bidir) {
            adjList[v].push_back(make_pair(u, weight));            
        }
    }

    void johnson(int V) {
        cout << "johnson Algorithm" << endl;

        for(int src = 0; src < V; src++) {            
            unordered_map<T, int> dist;
            // unordered_map<T, T> parent;
            for (auto j: adjList) {
                dist[j.first] = INT_MAX;
                // parent[j.first] = src;
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
                        // parent[neighbour.first] = node;
                        p.push(make_pair(dist[neighbour.first], neighbour.first));
                    }
                }
            }
            for(int i = 0; i < V; i++) {
                cout << dist[i] << " ";
            }
            cout << endl;
        }
        // stack<T> s;
        // T node = dest;
        // s.push(node);
        // while(node != src) {
        //     node = parent[node];
        //     s.push(node);
        // }
        // while(!s.empty()) {
        //     T node = s.top();
        //     cout << node << "-->";
        //     s.pop();
        // }
        // cout << "Distance Covered: " << dist[dest] << endl;
    }

    void floyd_warshall(int V) {
        long long dist[V][V];
        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                dist[i][j] = INT_MAX;
            }
            dist[i][i] = 0;
        }

        for(auto i : adjList) {
            for(auto j : adjList[i.first]) {
                dist[i.first][j.first] = j.second;
            }
        }

        for(int k = 0; k < V; k++) {
            for(int i = 0; i < V; i++) {
                for(int j = 0; j < V; j++) {
                    if (dist[i][j] > (dist[i][k] + dist[k][j])) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }

        cout << "Floyd Warshall Matrix" << endl;
        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                cout << dist[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    double p;
    cin >> p;
    Graph<int> g;
    
    int V;
    cin >> V;

    for(int i = 0; i < V; i++) {
        for(int j = i+1; j < V; j++) {
            if (i != j) {
                float temp = (float) rand()/RAND_MAX;
                temp = temp * p;
                if (temp > 0.3) {
                    int w = (rand() % 10) + 1;
                    g.addEdge(i, j, w);
                    cout << "Edge: " << i << " " << j <<  " " << w << endl;
                }
            }
        }
    }

    clock_t begin1 = clock();    
    g.johnson(V);
    clock_t end1 = clock();
    cout << "Time Elapsed: " << setprecision(9) << double(end1 - begin1) / CLOCKS_PER_SEC << endl;
    cout << endl;

    clock_t begin2 = clock();    
    g.floyd_warshall(V);
    clock_t end2 = clock();
    cout << "Time Elapsed: " << setprecision(9) << double(end2 - begin2) / CLOCKS_PER_SEC << endl;

    return 0;
}