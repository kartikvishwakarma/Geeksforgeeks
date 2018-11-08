#include <iostream>

using namespace std;

int main(){
	int t,n,k;

	cin>>t;
	while(t--){
		cin>>n>>k;

		bool res = n&(1<<k);

		res?cout<<"Yes\n":cout<<"No\n";
	}
}