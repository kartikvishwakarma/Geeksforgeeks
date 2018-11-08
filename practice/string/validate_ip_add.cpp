#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> v;

bool validate(string str){
	stringstream ss(str);

	string token;

	while(getline(ss, token, '.')){
		if(token.length()==0)
			return false;
		if(token.length()>3)
			return false;
		if(token<"0" || token>"255")
			return false;

		if((token<="9" && token>="0")&&token.length()>1)
			return false;

		v.push_back(token);
		//cout<<token<<"\n";
	}
	/*
	if(v.size()!=4)
		return false;
	*/
	return true;
}

int main(){
	int t;
	string str;

	cin>>t;
	while(t--){
		cin>>str;
		cout<<validate(str)<<"\n";
	}
	v.clear();
}

		
