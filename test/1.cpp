#include <iostream>
#define mod 100000007

using namespace std;

int main(){
	int t,n;
	long long int ans;
	cin>>t;

	while(t--){
		cin>>n;

		//ans = ((n%mod)*((n+1)%mod)*((2*n+1)%mod))/6;
		ans = (n*(n+1)*(2*n+1))/6;
		cout<<ans<<"\n";
	}
}