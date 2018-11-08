#include <iostream>

using namespace std;

int main(){
	long long int t,n;

	cin>>t;

	while(t--){
		cin>>n;
		//cout<<(n&-n)<<"\n";
		if (n==0)
			cout<<"NO\n";
		else
			((n&-n)==n)?cout<<"YES\n":cout<<"NO\n";
	}
}