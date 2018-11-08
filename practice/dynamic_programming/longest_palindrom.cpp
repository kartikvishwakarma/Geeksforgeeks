#include <iostream>
#include <cstring>

using namespace std;
/*
void longest_palindrom(string str){
	int n=str.length();
	bool len[n+1][n+1];

	memset(len, 0, sizeof(len));
	int max_len=1;
	int start=0;

	for(int i=0;i<=n;i++)
		len[i][i]=true;

	for(int i=0;i<n;i++){
		if(str[i]==str[i+1]){
			len[i][i+1]=true;
			start=i;
			max_len=2;
		}
	}

	for(int k=3;k<=n;k++){
		for(int i=0;i<n-k+1;i++){
			int j=k+i-1;
			if(len[i+1][j-1] && str[i]==str[j]){
				len[i][j]=true;
				if(max_len<k){
					start=i;
					max_len=k;
				}
			}
		}
	}
	cout<<str.substr(start,max_len)<<"\n";
}
*/

void longest_palindrom(string str){
	int n = str.length();
	int l,r,len,start;
	len=1; start=0;

	for(int i=1;i<n;i++){
		l=i-1; r=i;
		//even length
		while(l>=0 && r<n && str[l]==str[r]){
			if(r-l+1>len){
				len=r-l+1;
				start = l;
			}
			l--; r++;
		}

		// odd length
		l=i-1; r=i+1;
		while(l>=0 && r<n && str[l]==str[r]){
			if(r-l+1 > len){
				len=r-l+1;
				start=l;
			}
			l--; r++;
		}
	}
	cout<<str.substr(start, len)<<"\n";
}

int main(){
	string str = "babcbb";
	longest_palindrom(str);
}