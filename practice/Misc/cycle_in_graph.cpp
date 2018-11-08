
#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};
vector<int> g[100001];
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int _size,N;
        cin>>_size>>N;
        Graph *g = new Graph(_size);
        for(int i=0;i<N;i++)
        {
            int u,v;
            cin>>u>>v;
            g->addEdge(u,v);
        }
        
        cout<<g->isCyclic()<<endl;
    }
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of the class is as follows 
which contains an integer V denoting the no 
of vertices and a list of adjacency vertices.
class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};*/
/*You are required to complete this method*/

bool isCycliconnect(list<int> adj[],int k, bool visited[], bool recstack[]){
   
   if(visited[k] == false){
    visited[k] = true;
    recstack[k] = true;

    for(auto v : adj[k]){
        if(!visited[v] && isCycliconnect(adj,v,visited,recstack))
            return true;
        else if(recstack[v])
            return true;
    }
   }
   recstack[k] = false;
   return false;
}

bool Graph :: isCyclic()
{
//Your code here
    bool visited[V], recstack[V];

    for(int i=0; i<V; i++){
        visited[i] = false;
        recstack[i] = false;
    }


    for(int k=0; k<V; k++)
        if(isCycliconnect(adj,k,visited, recstack))
            return true;
            
    return false;
}