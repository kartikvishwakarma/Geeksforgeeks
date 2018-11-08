#include <iostream>

using namespace std;

int main(){
	int t,n;

	cin>>t;
	while(t--){
		cin>>n;

		(n&(n>>1))?cout<<"0\n":cout<<"1\n";
	}
}