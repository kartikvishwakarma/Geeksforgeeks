#include <iostream>
#include <cstring>
//#include <cstdli>

using namespace std;
/*
void max_palindrom(string str){
	int n = str.length();
	bool a[n][n]={false};
	//memset(a,false, sizeof(a));
	int maxlen = 1;
	

	for(int i=0;i<n;i++)
		a[i][i]=true;

	
	int start = 0;
s
	for(int i=n-2;i>=0; i--){
		if(str[i] == str[i+1]){
			a[i][i+1]=true;
			maxlen = 2;
			start = i;
		}
	}

	for(int k=3; k<=n;k++){
		for(int i=0;i<n-k+1;i++){
			int j = i+k-1;

			if(a[i+1][j-1] && str[i]==str[j]){
				a[i][j]=true;
				if(maxlen<k){
					start = i;
					maxlen = k;
				}
			}
		}
	}
	
	//cout<<start<<" : "<<start+maxlen<<"\n";
	cout<<str.substr(start, maxlen)<<"\n";

}
*/

void max_palindrom(string str){
	int n = str.length();
	int len=1;
	int start = 0;
	int l,r;

	for(int i=1;i<n;i++){
		l=i-1;
		r=i;

		while(l>=0 && r<n && str[l]==str[r]){
			if(r-l+1 > len){
				len = r-l+1;
				start = l;
			}
			l--; r++;
		}

		l=i-1;
		r=i+1;

		while(l>=0 && r<n && str[l]==str[r]){
			if(r-l+1 > len){
				len = r-l+1;
				start = l;
			}
			l--; r++;
		}
	}
	cout<<str.substr(start, len)<<"\n";
}

int main(){
	int t;
	string str;

	cin>>t;
	while(t--){
		cin>>str;

		max_palindrom(str);
	}
}