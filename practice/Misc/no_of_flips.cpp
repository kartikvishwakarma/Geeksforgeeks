#include <iostream>

using namespace std;

char flip(char c){
	return (c == '0')?'1':'0';
}

int getflips(string str, char bit){
	int ans=0;
	for(int i=0; i<str.length(); i++){
		if(str[i] != bit)
			ans++;
		bit = flip(bit);
	}
	return ans;
}

int flips(string str){
	return min(getflips(str, '0'), getflips(str,'1'));
}

int main(){
	int t;
	string str;
	cin>>t;
	while(t--){
		cin>>str;

		int ans = flips(str);

		cout<<ans<<"\n";
	}
}