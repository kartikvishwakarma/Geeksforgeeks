#include <iostream>
#include <cstdio>
#include <climits>
#define V 5

using namespace std;

int minNode(int cost[], bool visited[]){
	int min = INT_MAX, index;
	for(int v=0; v<V;v++){
		if(visited[v]==false && cost[v]<min){
			min = cost[v]; index = v;
		}
	}
	return index;
}

void print_mst(int graph[V][V], int parent[V]){
	for(int i=1; i<V;i++){
		printf("%d-%d %d\n",parent[i],i,graph[ils][parent[i]]);
	}
	printf("\n");
}

void prim_mst(int graph[V][V]){
	bool visited[V] = {false};
	int parent[V];
	int cost[V] = {INT_MAX};

	parent[0]=-1;
	cost[0]=0;

	for(int node=0; node<V-1; node++){
		int u = minNode(cost,visited);
		visited[u]=true;
		for(int v=0; v<V; v++){
			if(graph[u][v]&& visited[v]==false && graph[u][v]<cost[v]){
				cost[v]=graph[u][v];
				parent[v]=u;
			}
		}
	}
	print_mst(graph, parent);
}

int main(){
	int graph[V][V] = {{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };
     prim_mst(graph);
}