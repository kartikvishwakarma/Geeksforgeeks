#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t,n,p,k, ans;

	cin>>t;

	while(t--){
		cin>>n;
		cin>>p;
		if(n==1)
			ans = p;
		else{
			for(int i=1; i<n; i++){
				cin>>k;
				ans = __gcd(p,k);
				p = ans;
			}
		}
		cout<<ans<<"\n";
	}
}