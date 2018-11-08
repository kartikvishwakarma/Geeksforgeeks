#include <iostream>
#include <cmath>
#define size 26
using namespace std;

int main(){
	int t;
	string txt, patt;
	cin>>t;
	while(t--){
		cin>>txt;
		cin>>patt;
		int a1[size] = {0};
		int a2[size] = {0};

		for(int i=0; i<txt.length(); i++)
			a1[txt[i]-'a']++;

		for(int i=0; i<patt.length(); i++)
			a2[patt[i]]++;

		int ans = 0;

		for(int i=0; i<size; i++)
			ans+=abs(a1[i]-a2[i]);

		
		cout<<ans<<"\n";
	}
}