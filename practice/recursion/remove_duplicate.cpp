#include <iostream>
#include <string>
using namespace std;

void remove_dup(string str, int n, int p, string &t, bool flag){
	if(p==n+1)
		return ;

	if(str[p]==str[p-1]){
		flag=false;
		remove_dup(str,n,p+1,t,flag);
	}
	else {
		if(!flag){
			flag = true;
		}
		else{
			t+=str[p-1];
		}
		remove_dup(str,n,p+1,t,flag);
	}
}

int main(){
	int t,n;
	string str;

	cin>>t;

	while(t--){
		cin>>str;
		
		string t="";
		while(true){
			n = str.length();
			remove_dup(str,n,1,t,true);
			if(str.length() == t.length())
				break;
			str=t;
			t="";
		}
		cout<<str<<"\n";
	}
}