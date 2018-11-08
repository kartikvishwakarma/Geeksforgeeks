#include <iostream>

using namespace std;

int edit(char a[], char b[], int n, int m){
	int len[n+1][m+1];

	for(int i=0; i<=n;i++){
		for(int j=0; j<=m; j++){
			if(i==0)
				len[i][j]=j;
			else if(j==0)
				len[i][j]=i;
			else if(a[i-1]==b[j-1])
				len[i][j] = len[i-1][j-1];
			else				//insert       ..delete         //update	
				len[i][j] = 1+min(len[i][j-1], min(len[i-1][j], len[i-1][j-1]) );
		}

	}
	return len[n][m];
}

int main(){
	int t,n,m;

	cin>>t;

	while(t--){
		cin>>n>>m;
		char a[n], b[m];

		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<m;i++)
			cin>>b[i];

		int ans = edit(a,b,n,m);
		cout<<ans<<"\n";
	}
}