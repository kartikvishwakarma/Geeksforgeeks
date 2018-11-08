#include <iostream>
#include <climits>

using namespace std;

int knapsack(int v[], int w[], int W, int n){
	if(W==0 || n==0)
		return 0;

	else if(W<w[n-1])
		return knapsack(v,w,W,n-1);
	else
		return max(v[n-1]+knapsack(v,w,W-w[n-1], n-1),
					knapsack(v,w,W,n-1));
	
}

/*
int knapsack(int v[], int w[], int W, int n){
	int val[n+1][W+1];

	for(int i=0;i<=n;i++){
		for(int j=0;j<=W;j++){
			if(j==0 || i==0)
				val[i][j]=0;
			else if(j>=w[i-1])
				val[i][j] = max(v[i-1]+val[i-1][j-w[i-1]], val[i-1][j]);
			else{
				val[i][j] = val[i-1][j];
			}

		}
	}
	return val[n][W];
}
*/
int main(){
	int value[] = {60,100,120};
	int weight[] =  {10,20,30};
	int n= sizeof(value)/sizeof(value[0]);
	int W=50;

	int ans = knapsack(value, weight, W, n);
	cout<<ans<<"\n";
}