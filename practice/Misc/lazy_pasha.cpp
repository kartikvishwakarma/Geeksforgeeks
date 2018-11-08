#include <iostream>

using namespace std;

string reverse(string str){
	int n = str.size();
	char tmp;
	for(int i=0; i<n/2; i++){
		tmp = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = tmp;
	}
	return str;
}

void show(string str){
	cout<<str<<"\n"; 
}

int main(){
	int c,n,q,t,idx;
	int pos;
	cin>>c;
	
	while(c--){
		cin>>n>>q;
		char str[n];
		//string str,str1, str2;
		//cin>>str;
		for(int i=0; i<n;i++)
			cin>>str[i];
		long sum=0;
		for(int i=0; i<q; i++){
			cin>>t>>idx;
			if(t==1){
				sum += idx;
				//cout<<str<<"\n";
			}
			else if(t==2){
				int pos = n - (sum)%n;
				cout<<str[(pos+idx)%n]<<"\n";
			}
		}
	}
}