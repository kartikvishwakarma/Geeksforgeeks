#include <iostream>
#include <iterator>
#include <list>

using namespace std;

class Graph{
	int V;
	list<int> *adj;
public:
	Graph(int V) {
		this->V=V;
		adj = new list<int>[V];
	}
	~Graph(){
		delete []adj;
	}

	void addEdge(int v, int w);
	void greedyColoring();
};


void Graph::addEdge(int v, int w){
	adj[v].push_back(w);
	adj[w].push_back(v);
}
/*
void Graph::greedyColoring(){
	int result[V]; // all possible color in worse
	result[0]=0;

	for(int u=1;u<V;u++){
		result[u]=-1;
	}

	bool available[V]; // list of color which can be assign or not.

	for(int cr=0;cr<V;cr++)
		available[cr]=false;

	for(int u=1;u<V;u++){
		list<int>::iterator it;

		for(it=adj[u].begin(); it!= adj[u].end(); it++){
			if(result[*it]!=-1)
				available[result[*it]]=true;
		}
		int cr;
		for(cr=0; cr<V;cr++){
			if(available[cr]==false)
				break;
		}

		result[u]=cr;
		// result color can't be assigned to u due to constrain, but
		//	after assign color to  u, now those color that can't assign
		//  to u now can be assigned to it's adjecent node. So, we marking
		//  those node as false for next element.

		for(it=adj[u].begin(); it!=adj[u].end(); it++){
			if(result[*it]!=-1)
				available[result[*it]]=false;
		}
	}

	for(int i=0;i<V;i++){
		cout<<"node: "<<i<<" assigned color: "<<result[i]<<"\n";
	}
}
*/
void Graph::greedyColoring(){
	int res[V]; //all colors
	res[0]=0;
	for(int u=1;u<V;u++)
		res[u]=-1;

	bool available[V];

	for(int i=0;i<V;i++)
		available[i]=false;

	for(int i=1;i<V;i++){
		list<int>::iterator it;

		for(it=adj[i].begin(); it!=adj[i].end(); it++){
			if(res[*it]!=-1)
				available[res[*it]]=true;
		}
		int g;
		for(g=0;g<V;g++){
			if(available[g]==false)
				break;
		}
		res[i]=g;

		for(it=adj[i].begin(); it!=adj[i].end(); it++){
			if(res[*it]!=-1)
				available[res[*it]]=false;
		}
	}

	for(int i=0;i<V;i++)
		cout<<i<<"-->"<<res[i]<<"\n";
}

int main(){
	Graph g1(5);
	g1.addEdge(0,1);
	g1.addEdge(0, 2);
    g1.addEdge(1, 2);
    g1.addEdge(1, 3);
    g1.addEdge(2, 3);
    g1.addEdge(3, 4);

    g1.greedyColoring();
}