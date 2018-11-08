#include <iostream>

using namespace std;

int josephus(int n, int k){
	if(n==1)
		return 1;

	return (josephus(n-1,k)+k-1)%n+1;
}

int main(){
	int t,k,n,ans;

	cin>>t;

	while(t--){
		cin>>n>>k;

		ans = josephus(n,k);
		cout<<ans<<"\n";
	}
}