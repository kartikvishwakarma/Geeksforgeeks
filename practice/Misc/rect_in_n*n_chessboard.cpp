#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long t,n;

	cin>>t;

	while(t--){
		cin>>n;
		long long ans = 0;
		if(n>1)
			ans = (n*(n+1)*n*(n+1))/4 -(n*(n+1)*(2*n+1))/6;
		cout<<ans<<"\n";
	}
}