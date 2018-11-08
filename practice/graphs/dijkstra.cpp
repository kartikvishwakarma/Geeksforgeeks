#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>
#include <climits>

#define N 9
using namespace std;

typedef pair<int, int> ipair;

int a[N][N];

void Dijkstra(int dist[], int n, int src){
	bool visited[n];

	for(int i=0; i<n; i++){
		visited[i] = false;
		dist[i] = INT_MAX;
	}

	dist[src] = 0;

	priority_queue<ipair, vector<ipair>, greater<ipair> > q;
	q.push(make_pair(dist[src], src));

	while(!q.empty()){
		int u = q.top().second;
		q.pop();
		visited[u] = true;
		for(int v = 0; v<n; v++){
			if(a[u][v] != 0 && !visited[v] && dist[v] > dist[u]+a[u][v]){
				dist[v] = dist[u] + a[u][v];
				q.push(make_pair(dist[v], v));
			}
		}
	}

}

void print_dist(int dist[], int n, int src){
	for(int i=0; i<n; i++)
		cout<<src<<" --- "<<i<<" : "<<dist[i]<<"\n";
}




int main(){
	int n;

	cin>>n;
	
	int dist[n];


	for(int i=0; i<n; i++){
		for(int j=0; j<n;j++){
			cin>>a[i][j];
		}
	}
	int src=0;
	cout<<"calling Dijkstra..\n";
	Dijkstra(dist, n, src);
	cout<<"return from Dijkstra..\n";
	print_dist(dist, n, src);
}