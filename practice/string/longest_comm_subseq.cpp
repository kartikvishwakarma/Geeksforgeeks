#include <iostream>
#include <algorithm>
using namespace std;

char a[101],b[101];

int lcs(int m, int n){
	int len[m+1][n+1];
	//cout<<"start..\n";
	for(int i=0;i<=m;i++){
		len[0][i]=0;
		len[i][0]=0;
	}

	for(int i=1; i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i]==b[j]){
				len[i][j]=1+len[i-1][j-1];
	//			cout<<"if case\n";
			}
			else{
				len[i][j] = max(len[i-1][j], len[i][j-1]);
	//			cout<<"else case\n";			
			}
		}
	}
	//cout<<"done...\n";
	return len[m][n];
}

int main(){
	int t,m,n;
	cin>>t;

	while(t--){
		cin>>m>>n;
		for(int i=1;i<=m;i++)
			cin>>a[i];

		for(int i=1;i<=n;i++)
			cin>>b[i];
		//cout<<"main..\n";
		int ans = lcs(m,n);
		cout<<ans<<"\n";
	}
}