#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> v;

int main(){
	int t;
	string str;

	cin>>t;
	while(t--){
		cin>>str;

		stringstream ss(str);

		string token;

		while(getline(ss, token, '.')){
			v.push_back(token);
			v.push_back(".");
			//cout<<token<<"\n";
		}

		for(int i=v.size()-2; i>=0;i--){
			cout<<v[i];
		}
		cout<<"\n";
		v.clear();
	}
}