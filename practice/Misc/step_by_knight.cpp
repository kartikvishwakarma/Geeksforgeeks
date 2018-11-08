#include <iostream>
#include <queue>
using namespace std;

typedef struct Cell{
	int x,y;
	int dist;

	Cell() {}
	Cell(int x, int y, int dist){
		this->x = x;
		this->y = y;
		this->dist = dist;
	}
}cell;

bool safe(int x, int y, int n, int m){
	if(x>=1 && x<=n && y>=1 && y<=m)
		return true;
	return false;
}

int ans(int src[], int dest[], int n, int m){
	queue<cell> q;
	bool visited[n+1][m+1];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			visited[i][j]=false;
	}

	int dx[] = {1,1,-1,-1,2,2,-2,-2};
	int dy[] = {2,-2,2,-2,1,-1,1,-1};

	 q.push(Cell(src[0], src[1], 0));
	 cell tmp;
	 int x, y;
	 
	 visited[src[0]][src[1]]=true;

	 while(!q.empty()){
	 	tmp = q.front();
	 	q.pop();
 		if(tmp.x == dest[0] && tmp.y == dest[1])
 			return tmp.dist;

 		for(int i=0;i<8;i++){
 			x = tmp.x + dx[i];
 			y = tmp.y + dy[i];

			if(safe(x,y,n,m) && !visited[x][y]){
				q.push(Cell(x,y,tmp.dist+1));
				visited[x][y]=true;
			}
 			
 		}
 	}
 	return -1;
}	

int main(){
	int src[2], dest[2],t,n,m;

	cin>>t;

	while(t--){
		cin>>n>>m;
		cin>>src[0]>>src[1];
		cin>>dest[0]>>dest[1];

		int tmp = ans(src,dest,n,m);

		cout<<tmp<<"\n";
	}
}