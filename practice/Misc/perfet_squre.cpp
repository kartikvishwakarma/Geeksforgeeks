#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		int p = sqrt(n);
		int ans = (p*p == n)?1:0;

		cout<<ans<<"\n";
	}
}