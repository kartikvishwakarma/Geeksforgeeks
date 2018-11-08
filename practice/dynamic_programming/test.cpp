#include <iostream>
#include <climits>
using namespace std;

int knapsack(int val[], int weight[], int W, int n){
	if(W<=0 || n==0)
		return 0;
	
	return max(val[n-1]+knapsack(val,weight,W-weight[n-1],n-1),
				knapsack(val,weight,W,n-1));
}

int dp_knapsack(int val[], int weight[], int W, int n){
	int dp[n+1][W+1];

	for(int i=0;i<=n;i++){
		for(int j=0;j<=W;j++){
			
				if(j==0 || i==0)
					dp[i][j]=0;
				else if(weight[i-1]<=j){
					dp[i][j] = max(val[i-1]+dp[i-1][j-weight[i-1]], dp[i-1][j]);
				}
				else 
					dp[i][j] = dp[i-1][j];
			
		}
	}
	return dp[n][W];
}

int main(){
	int val[] = {60,100,120};
	int weight[]  = {10,20,30};
	int W=50;
	int n = sizeof(val)/sizeof(val[0]); 
	int ans = dp_knapsack(val,weight,W,n);
	cout<<ans<<"\n";
}