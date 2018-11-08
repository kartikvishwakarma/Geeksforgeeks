#include <iostream>
#include <map>

using namespace std;

int main(){
	int t;
	string str;
	cin>>t;

	while(t--){
		cin>>str;
		bool f=false;
		map<char, int> m;

		for(int i=0; i<str.length(); i++)
			m[str[i]]++;

		for(int i=0; i<str.length(); i++){
			if(m[str[i]]>1){
				cout<<str[i]<<"\n";
				f = true;
				break;
			}
		}

		if(!f)
			cout<<"-1\n";
	}
}