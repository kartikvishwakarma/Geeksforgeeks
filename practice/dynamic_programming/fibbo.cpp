#include <iostream>

using namespace std;

void fibbo(int n){
	long long int f[n+1];

	for(int i=0;i<=n;i++){
		if(i==0||i==1)
			f[i]=i;
		else
			f[i]=f[i-1]+f[i-2];
	}

	for(int i=1;i<=n;i++)
		cout<<f[i]<<" ";
	cout<<"\n";
}

int main(){
	int t,n;

	cin>>t;
	while(t--){
		cin>>n;

		fibbo(n);
	}
}