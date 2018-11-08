#include <iostream>
#include <cstring>

using namespace std;

void longest_palindrom(string str){
	int n=str.length();
	int len[n+1][n+1];

	memset(len, 0, sizeof(len));
	int max_len=1;
	int start=0;

	for(int i=0;i<=n;i++)
		len[i][j]=1;

	for(int i=0;i<n;i++){
		if(str[i]==str[i+1]){
			len[i][i+1]=2;
			start=i;
		}
	}

	for(int k=3;k<=n;k++){
		for(int i=1;i<=n-k+1;i++){
			int j=k+i-1;
			if(str[i-1] == str[j-1] && k>max_len){
				len[i][j]=k;
				start=i;
				max_len=k;
			}
		}
	}
	cout<<str.substr(start,max_len)<<"\n";
}

int main(){
	string str = "babcbab";
	longest_palindrom(str);
}