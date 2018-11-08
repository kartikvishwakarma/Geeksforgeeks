#include <iostream>

using namespace std;
int a[20][20];
int val;


int solve(int n, int u, int v, int k){
	int p[n][n][k+1];

	for(int e=0;e<=k;e++){

		for(int i=0; i<n;i++){
			
			for(int j=0;j<n;j++){
				
				p[i][j][e]=0;

				if(e==0 && i==j)
					p[i][j][e]=1;
				if(e==1 && a[i][j])
					p[i][j][e]=1;

				if(e>1){
					for(int z=0;z<n;z++){
						if(a[i][z])
							p[i][j][e] += p[z][j][e-1];
					}
				}
			}
		}
	}
	return p[u][v][k];
}

int main(){
	int t,n,u,v,k;

	cin>>t;

	while(t--){
		cin>>n;

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		cin>>u>>v>>k;
		//int ans = 0;
		val = solve(n,u,v,k);
		cout<<val<<"\n";
	}
}