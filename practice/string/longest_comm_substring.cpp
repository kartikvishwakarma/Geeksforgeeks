#include <iostream>
#include <algorithm>
using namespace std;

char a[101],b[101];

int lcs(int m, int n){
	int max_len=0;
	int len[m+1][n+1];

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0)
				len[i][j]=0;

			else if(a[i-1] == b[j-1]){
				len[i][j] = 1+len[i-1][j-1];
				max_len = max(max_len, len[i][j]);
			}

			else
				len[i][j]=0;
		}	
	}
	//cout<<"done...\n";
	return max_len;
}

int main(){
	int t,m,n;
	cin>>t;

	while(t--){
		cin>>m>>n;
		for(int i=0;i<m;i++)
			cin>>a[i];

		for(int i=0;i<n;i++)
			cin>>b[i];
		//cout<<"main..\n";
		int ans = lcs(m,n);
		cout<<ans<<"\n";
	}
}