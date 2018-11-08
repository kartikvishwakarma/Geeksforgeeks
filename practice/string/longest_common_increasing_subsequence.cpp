#include <iostream>
#include <vector>

using namespace std;

int lcs(int a[], int b[], int m, int n){
	int len[m+1][n+1];
	vector<int> elem;

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0){
				len[i][j]=0;
				//val[i][j]=0;
			}

			else if(a[i]==b[j] && (a[i]>a[i-1]||b[j]>b[j-1])){//} && val[i][j]>val[i-1][j-1]){
				len[i][j]=1+len[i-1][j-1];


			}
			else
				len[i][j]=max(len[i-1][j],len[i][j-1]);
		}
	}
	return len[m][n];
}

int main(){
	int t,n,m;

	cin>>t;
	while(t--){
		cin>>m;
		int a[m];
		for(int i=0;i<m;i++)
			cin>>a[m];

		cin>>n;
		int b[n];
		for(int i=0;i<n;i++)
			cin>>b[n];

		int ans = lcs(a,b,m,n);
		cout<<ans<<"\n";


	}
} 