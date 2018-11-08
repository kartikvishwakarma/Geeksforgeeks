#include<bits/stdc++.h>
using namespace std;
 
void all_seq(string str, int p, int n){
	string z="";
	for(int i=p;i<n;i++){
		if(islower(str[i])){
			z=str;
			z[i]=(char)(str.at(i)-32);
			cout<<z<<"\n"; 
		}
		all_seq(z,i+1,n);
	}
}

 int main(){
	int t,n;
	string str;

	cin>>t;

	while(t--){
		cin>>str;
		n = str.length();
		all_seq(str, 0,n);
		cout<<"\n";
	}

}
