#include <iostream>
#include <cmath>
using namespace std;



int main(){
	int t,n,r,p1,p2;
	string str;
	cin>>t;

	while(t--){
		cin>>str;
		r=0;
		string ans="";
		for(int i=0;i<str.length();i++){
			p1 = str.at(i)-'a';
			p2 = str.at(i)-'A';
			if(!(p1>=0 && p1<26) && !(p2>=0 && p2<26))
				ans+=str[i];
		}
		cout<<ans<<"\n";
	}
}