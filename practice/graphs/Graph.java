import java.util.LinkedList;

public class Graph{
	
	static class graph{
		int V;
		LinkedList<Integer> adjListArray[];

		graph(int V){
			this.V = V;
			adjListArray = new LinkedList[V];

			for(int i=0; i<V; i++)
				adjListArray[i] = new LinkedList<>();
		}
	}

	static void addEdge(graph g, int src, int dest){
		g.adjListArray[src].addFirst(dest);
		g.adjListArray[dest].addFirst(src);
	}

	static void printGraph(graph g){
		for(int i=0; i<g.V; i++){
			System.out.println("Adjacency list of vertex " + i);
			System.out.print("head");
			for(Integer pCrawl : g.adjListArray[i]){
				System.out.print(" --> "+pCrawl);
			}
			System.out.println("\n");
		}
	}

	public static void main(String []args){
		int V = 5;
		graph g = new graph(V);

		addEdge(g,0,1);
		addEdge(g,0,4);
		addEdge(g,1,2);
		addEdge(g,1,3);
		addEdge(g,1,4);
		addEdge(g,2,3);
		addEdge(g,3,4);

		printGraph(g);
	}
}

