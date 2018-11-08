#include <iostream>
#include <cmath>
using namespace std;

void sieve_eratos(int n){
	bool ans[n+1];

	for(int i=0; i<=n; i++)
		ans[i]=true;


	for(int i=2; i<=sqrt(n); i++){
		if(ans[i]){
			for(int j=2*i; j<=n; j+=i){
				ans[j]=false;
			}
		}
	}

	for(int i=2; i<=n; i++){
		if(ans[i])
			cout<<i<<" ";
	}
	cout<<"\n";
}

int main(){
	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		sieve_eratos(n);
	}
}