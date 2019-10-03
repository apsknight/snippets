#include<iostream> 
#include<list> 
using namespace std; 

#define mp make_pair
#define p pair<int,int>

int cnt;

class Graph 
{ 
    int V;

    list<int> *adj; 
  
    void DFSUtil(int v, bool visited[]); 
public: 
    Graph(int V);
    void addEdge(int v, int w); 
    int DFS(); 
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w);
    adj[w].push_back(v);
} 
  
void Graph::DFSUtil(int v, bool visited[]) 
{ 
    visited[v] = true;
    cnt++;

    list<int>::iterator i; 
    for (i = adj[v].begin(); i != adj[v].end(); ++i) 
        if (!visited[*i]){
            DFSUtil(*i, visited);
        }
} 

int Graph::DFS() 
{ 

    bool *visited = new bool[V]; 
    for (int i = 0; i < V; i++) 
        visited[i] = false; 

    int count=0,num=0;
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            count++;
            cnt=0;
            DFSUtil(i, visited);
            // cout<<i+1<<" "<<cnt<<endl;
            num+=(cnt-1);
        }
    }

    return ((count-1)*2 + num);
}

int main() 
{ 
    int t,n,m,a,b;
    cin>>t;
    for(int k=1;k<=t;k++){
        cin>>n>>m;

        Graph g(n);

        for(int i=0;i<m;i++){
            cin>>a>>b;
            g.addEdge(a-1,b-1);
        }

        printf("Case #%d: %d\n",k,g.DFS());

    }
  
    return 0; 
}