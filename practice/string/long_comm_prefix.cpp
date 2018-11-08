#include <iostream>
#include <algorithm>
using namespace std;

char a[101],b[101];

int lcs(string str1, string str2){
	int max_len=0;
	int m = str1.length();
	int n = str2.length();
	int len[m+1][n+1];
	int start=0;

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0)
				len[i][j]=0;
			else if((str1[i-1] != str2[j-1]) && (str1[i]==str2[j]))
				start = i;

			else if(str1[i-1] == str2[j-1]){
				len[i][j] = 1+len[i-1][j-1];
				max_len = max(max_len, len[i][j]);
			}

			else
				len[i][j]=0;
		}	
	}
	//cout<<"done...\n";
	cout<< str1.substr(start,max_len)<<"\n";
	return start;
}

int main(){
	int t;
	string str1, str2;
	cin>>t;

	while(t--){
		cin>>str1;
		cin>>str2;
		int ans = lcs(str1,str2);
		cout<<ans<<"\n";
	}
}