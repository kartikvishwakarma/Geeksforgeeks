#include <iostream>
#include <string>
using namespace std;

void longest_palindrom(string str){
	int n = str.length();
	int start=0, end,l,r;
	int length=1;
	for(int i=1;i<n;i++){
		l=i-1; r=i;

		while(l>=0 && r<n && str[l]==str[r]){
			if(r-l+1>length){
				length = r-l+1;
				start=l;
			}
			l--; r++;
		}

		l=i-1; r=i+1;
		while(l>=0 && r<n && str[l]==str[r]){
			if(r-l+1>length){
				length = r-l+1;
				start=l;
			}
			l--; r++;
		}		
	}
	cout<<str.substr(start,length)<<"\n";
}

int main(){
	string str = "babcbab";
	longest_palindrom(str);
}