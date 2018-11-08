#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int sum(int a[], int p, int n){
	int total=0;
	for(int i=p;i<=n;i++)
		total+=a[i];
	return total;
}


int partition(int a[], int k, int n){
	int part[k+1][n+1];
	
	for(int i=1;i<=n;i++)
		part[1][i]=sum(a,0,i-1);

	for(int i=1;i<=k;i++)
		part[i][1]=a[0];


	for(int i=2; i<=k;i++){
		for(int j=2;j<=n;j++){
			int best = INT_MAX;
			for(int p=1;p<=j;p++){
				best = min(best, max(part[i-1][p], sum(a,p,j-1)));
			}
		part[i][j]=best;
		}
	}
/*
	for(int i=0; i<=k;i++){
		for(int j=0;j<=n;j++){
			cout<<part[i][j]<<" ";
		}
		cout<<"\n";
	}
*/
	return part[k][n];
}

int main(){
	int t,k,n,ans;

	cin>>t;

	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>k;
		int val=0;
		ans = partition(a,k,n);
		cout<<ans<<"\n";
	}
}