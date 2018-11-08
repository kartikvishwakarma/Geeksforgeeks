#include <iostream>
#include <algorithm>
#include <vector> 
#include <string>

using namespace std;


int main(){
	int t,n;
	string word;

	cin>>t;

	while(t--){
		cin>>n;
		vector<string> str(n);

		for(int i=0;i<n;i++){
			cin>>word;
			str.push_back(word);
		}

		//cin>>word;
		word="";
		bool r = find(str.begin(),str.end(), word) != str.end();

		if(r)
			cout<<"found...\n";
		else
			cout<<"not found...\n";
	}
}