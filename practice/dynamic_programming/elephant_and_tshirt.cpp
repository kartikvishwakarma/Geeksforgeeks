#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main(){
	int t,n;
	
	string str;
	cin>>t;
	cout<<t<<"\n";
	while(t--){
		//cin>>n;
		getline(cin,str);
		cout<<str;
		n = stoi(str);
		for(int i=0;i<n;i++){
			while(getline(cin,str))
				cout<<str<<"\n";
		}
	}
}