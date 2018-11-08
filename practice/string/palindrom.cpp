#include <iostream>

using namespace std;

bool isPalindrom(string str, int n){
	for(int i=0;i<n/2;i++){
		if(str[i] != str[n-i-1])
			return false;
	}
	return true;
}

int main(){
	int t,n;
	string str;
	cin>>t;

	while(t--){
		cin>>n;
		cin>>str;
		if(isPalindrom(str,n))
			cout<<"Yes\n";
		else 
			cout<<"No\n";
	}
}