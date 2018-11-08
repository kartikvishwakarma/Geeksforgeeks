#include <iostream>
using namespace std;


void KMP(string txt, string patt){
	
	int n = patt.length();
	int m = txt.length();
	int lps[n+1],pos;
	int len=0;
	lps[1]=0;
	
	for(int i=2;i<=n;i++){

		while(len && patt[len] != patt[i-1])
			len = lps[len];

		if(patt[len] == patt[i-1])
			len++;
		
		lps[i]=len;
	}
	int j=0;
	len=0;
	for(int i=0;i<m; i++){
		while(j && txt[i] !=patt[j])
				j=lps[j];

		if(txt[i]==patt[j])
			j++;

		if(j>len){
			len = j;
			pos = i-j+1;

		}
	}
	if(pos==0 && patt[pos]!= txt[pos])
		cout<<"-1\n";
	else 
		cout<<pos<<" "<<patt.substr(0,len)<<"\n";
}

int main(){
	int t,m,n;
	string str1, str2;
	cin>>t;
	while(t--){
		cin>>str1;
		cin>>str2;
		str2+=str2;
		KMP(str2, str1);
	}
}