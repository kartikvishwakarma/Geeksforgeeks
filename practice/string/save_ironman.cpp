#include <iostream>
//#include <sstream>
#include <string>
#include <cstdio>

using namespace std;

bool isPalindrom(string str){
	int n = str.length();
	//cout<<str<<" ";
	for(int i=n-1; i>=n/2; i--){
		//cout<<str[i]<<" "<<str[n-i-1]<<"\n";
		if(str[i] != str[n-i-1])
			return false;
	}
	return true;
}

int main(){
	int n,t;
	string str, pure;
	//cin>>t;
	scanf("%d\n", &t);
	while(t--){
		string name;
		getline(cin,name);
		str="";
		for(int i=0; i<name.length(); i++){
			if(name[i]>=97 && name[i]<=122)
				str+=name[i];
			else if(name[i]>=65 && name[i]<=90)
				str+=(name[i]+32);
			else if(name[i]>=48 && name[i]<=57)
				str+=name[i];
		}

		if(isPalindrom(str))
			cout<<"YES\n";
		else 
			cout<<"NO\n";
	}
}