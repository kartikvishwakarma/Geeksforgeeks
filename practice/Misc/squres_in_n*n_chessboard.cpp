#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t,n;

	cin>>t;

	while(t--){
		cin>>n;
		int ans = 0;
		for(int i=0; i<n;i++)
			ans += (int)pow(n-i,2);

		cout<<ans<<"\n";
	}
}