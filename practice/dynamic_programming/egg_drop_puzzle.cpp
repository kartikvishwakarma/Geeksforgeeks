#include <iostream>
#include <climits>

using namespace std;

int eggDrop(int n, int k){
	int a[n+1][k+1];
	int ans, Min;

	for(int i=1;i<=n;i++){
		a[i][0]=0;
		a[i][1]=1;
	}

	for(int j=1; j<=k; j++){
		a[1][j]=j;
	}

	for(int i=2;i<=n;i++){
		
		for(int j=2; j<=k;j++){


			Min = INT_MAX;
			for(int p=1; p<=j; p++){
				ans = 1+max(a[i-1][p-1] , a[i][j-p]);
				Min = min(Min, ans);
			}
			a[i][j] = Min;
		}
	}
	return a[n][k];
}

int main(){
	//n : # of eggs, k : # of floors
	int n,k;
	n=2, k=36;
	int res = eggDrop(n,k);
	cout<<res<<"\n";	
}