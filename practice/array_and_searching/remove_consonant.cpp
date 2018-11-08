#include <iostream>
#include <cstdio>
//#include <sstream>
using namespace std;

int main(){
	int n,t;
	string str,tmp;
	scanf("%d\n",&t);
	while(t--){
		getline(cin, str);
		n = str.length();
		tmp="";
		for(int i=0;i<n;i++){
			//if(str.at(i)'')
			//char c;
			switch(str.at(i)){
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
				case ' ':
				tmp+=str[i];
			}
		}
		if(tmp.length())
			cout<<tmp<<"\n";
		else{
			cout<<"No Vowel\n";
		}
	}
}