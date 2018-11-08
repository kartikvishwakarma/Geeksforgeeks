#include <iostream>

using namespace std;
typedef unsigned long long int ll;
// recursive
/*
ll binomial_coff(ll n, ll k){
	if(n==1 || k ==0 || n==k)
		return 1;
	return binomial_coff(n-1,k)+binomial_coff(n-1,k-1);
		
}
*/
// Dynamic programming
/*  
ll binomial_coff(ll n, ll k){
	ll coff[n+1][k+1];

	for(ll i=0; i<=n;i++){
		for(ll j=0; j<=min(i,k); j++){
			if(i==j || j==0)
				coff[i][j]=1;
			else
				coff[i][j] = coff[i-1][j]+coff[i-1][j-1];
		}
	}
	return coff[n][k];
}
*/
// Dynamic programming space optimized

ll binomial_coff(ll n, ll k){
	ll coff[k+1]={0};
	coff[0]=1;

	for(ll i=1; i<=n;i++){
		for(ll j=min(i,k); j>0; j--)
			coff[j]=coff[j]+coff[j-1];
	}

	return coff[k];
}

int main(){
	ll n,k;
	//n=900; k=220;
	n=5, k=2;
	ll ans = binomial_coff(n,k);
	cout<<ans<<"\n";
	//binomial_coff(n,k);
	//cout<<"\n";
	return 0;
}