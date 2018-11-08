#include <iostream>
#include <sstream>
using namespace std;

int val(char s){
	if(s>=48 && s<=57)
		return s-'0';
	else if(s>=97 && s<=102)
		return s-'a'+10;
	else if(s>=65 && s<=70)
		return s-'A'+10;
}

char term(int n){
	if(n>=0 && n<=9)
		return '0'+n;
	else
		return 'A'+(n-10); 
}

int main(){
	int n,t;

	string s;
	cin>>t;	
	while(t--){
		cin>>s;
		n = s.length();
		int curr, prev;
		cout<<s[0];
		for(int i=1; i<=n/2; i++){
			prev = val(s[i-1]);
			curr = val(s[i]);

			curr = prev^curr;
			cout<<term(curr);
		}
		cout<<"\n";
	}
}