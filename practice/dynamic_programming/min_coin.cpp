#include <iostream>
#include <climits>
using namespace std;
/*
int min_coins(int coins[], int n, int V){
	if(V==0)
		return 0;

	int res = INT_MAX;

	for(int i=0; i<n;i++){
		if(V>=coins[i]){
			int min_res = min_coins(coins, n, V-coins[i]);
			if(min_res != INT_MAX && min_res+1 < res){
				res = 1+min_res;
			}
		}
	}
	return res;
}
*/
int min_coins(int coins[], int n, int V){
	int len[n+1][V+1];

	for(int i=0;i<=n;i++){
		for(int j=0;j<=V;i++){
			int res = INT_MAX;
			if(j==0 || i==0)
				len[i][j]=0;
			for(int k=0;k<=i;k++){if(j >= coins[k]){
					int min_res = len[i][j-coins[k]];
					if(res>1+min_res)
						res = 1+min_res;
				}
			}
			len[i][j]=res;
		}
	}
	return len[n][V];
}

int main(){
	int coins[] = {25,10,5};
	int n = sizeof(coins)/sizeof(coins[0]);
	int V=30;
	

	int ans = min_coins(coins, n, V);
	cout<<ans<<"\n";
}