#include <iostream>
#include <vector>
#include <stack>
#include <iterator>

using namespace std;

typedef struct Graph{
	int V;
	vector<int> *adj;

	Graph(int);
	void addEdge(int, int);
	void disp();
	void topology();
	void topologyUtil(int, stack<int> &, bool []);		
}graph;


Graph::Graph(int v){
		this->V = v;
		adj = new vector<int>[V]; 
}

void Graph::addEdge(int u, int v){
	adj[u].push_back(v);
} 


void Graph::disp(){

	for(int i=0; i<V;i++){
		cout<<i<<" | ";
		for(int j=0; j<adj[i].size();j++)
			cout<<adj[i][j]<<"->";
		cout<<"\n";
	}
}

void Graph::topologyUtil(int v, stack<int> &s, bool visited[]){
	visited[v]=true;

	for(int i=0; i<adj[v].size();i++){
		if(!visited[adj[v][i]])
			topologyUtil(adj[v][i], s, visited);
	}
	s.push(v);
}

void Graph::topology(){
	bool visited[V]={false};
	stack<int> s;
	for(int i=0; i<V;i++){
		if(!visited[i])
			topologyUtil(i,s,visited);
	}
	
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<"\n";
}

int main(){
	graph g = Graph(6);

	g.addEdge(2,3);
	g.addEdge(3,1);
	g.addEdge(4,0);
	g.addEdge(4,1);
	g.addEdge(5,2);
	g.addEdge(5,0);

	//g.disp();
	g.topology();
}