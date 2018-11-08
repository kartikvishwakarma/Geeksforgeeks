#include <iostream>

using namespace std;


int no_of_sequence(int m, int n){
	if(m<n)
		return 0;

	if(n==0)
		return 1;

	return no_of_sequence(m-1,n)+no_of_sequence(m/2,n-1);
}

int main(){
	int t,m,n,ans;

	cin>>t;

	while(t--){
		cin>>m>>n;

		ans = no_of_sequence(m,n);
		cout<<ans<<"\n";
	}
}