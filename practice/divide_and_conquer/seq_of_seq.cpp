#include <iostream>

using namespace std;

int no_of_sequence(int m, int n){
	int a[m+1][n+1];

	for(int i=0;i<=m; i++){
		
		for(int j=0;j<=n;j++){

			if(i==0 || j==0)
				a[i][j]=0;
			else if(i<j)
				a[i][j]=0;
			else if(j==1)
				a[i][j]=i;
			else
				a[i][j] = a[i-1][j]+a[i/2][j-1];
		}
	}
	return a[m][n];
}

int main(){
	int t,m,n,ans;

	cin>>t;

	while(t--){
		cin>>m>>n;

		ans = no_of_sequence(m,n);
		cout<<ans<<"\n";
	}
}