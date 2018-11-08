#include <iostream>

using namespace std;

int main(){
	int t,m,n;
	string str1, str2;
	cin>>t;
	while(t--){
		cin>>str1;
		cin>>str2;
		m=str1.length();
		n=str2.length();
		int s,e,len,ind;
		int max_len=0;
		s=0;
		len=0;
		for(int j=0;j<n;j++){
			
			if(str1[s]==str2[j])
				s++, len++;

			else {
				if(len>max_len){
					max_len = len;
					ind = j;
				}
				len=0; s=0;
			}
		}
		cout<<ind<<" "<<str1.substr(0,s)<<"\n";

	}
}