#include <iostream>
#include <climits>
#include <ctime>

using namespace std;

int sum(int a[], int l, int r){
	int res=0;
	for(int i=l;i<r;i++)
		res+=a[i];

	return res;
}

int painter_partition(int a[], int n, int k){
	if(k==1)
		return sum(a,0,n);

	if(n==1)
		return a[n-1];

	int ans = INT_MAX;

	for(int i=1; i<=n; i++){
		int res = max(painter_partition(a,i,k-1), sum(a,i,n));
		if(res != INT_MAX && res < ans)
			ans = res;
	}
	return ans;
}

int dp_painter_partition(int a[], int n, int k){
	int dp[k+1][n+1];

	for(int i=0; i<=n;i++){
		dp[1][i]=sum(a,0,i);
	}

	for(int i=1;i<=k;i++)
		dp[i][1]=a[0];


	for(int i=2; i<=k; i++){
		for(int j=2; j<=n;j++){
			int ans = INT_MAX;
			for(int p=1; p<=j;p++){
				int res = max(dp[i-1][p], sum(a,p,j));
				ans = min(ans,res);
			}
			dp[i][j] = ans;
		}
	}

	return dp[k][n];
}

int main(){
	int a[] = {10,20,60,50,30,40,80,90,110,130,150,170};
	int n = sizeof(a)/sizeof(a[0]);
	int k=3;
	time_t t = clock();

	int ans = dp_painter_partition(a,n,k);
	t = clock()-t;
	double time = ((double)t)/CLOCKS_PER_SEC;;
	cout<<"time (in sec): "<<time<<"\t"<<ans<<"\n";

	t=clock();
	ans = painter_partition(a,n,k);
	t = clock()-t;
	time = ((double)t)/CLOCKS_PER_SEC;;
	cout<<"time (in sec): "<<time<<"\t"<<ans<<"\n";
}