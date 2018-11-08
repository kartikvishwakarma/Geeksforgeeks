#include <iostream>
#include <cstring>
//#define n 3
//#define sum 6

using namespace std;
typedef long long int ll;

ll no_way(ll sum, ll n){
	ll dp[n+1][sum+1];
	memset(dp,0,sizeof(dp));

	for(ll i=1;i<=6 && i<=sum;i++)
		dp[1][i]=1;

	for(ll i=2;i<=n;i++){
		for(ll j=1;j<=sum; j++){
			for(ll k=1;k<=6 && k<j; k++)
				dp[i][j]+=dp[i-1][j-k];
		}
	}
	return dp[n][sum];
}

int main(){
	ll sum=50;
	ll n=15;
	ll ans = no_way(sum,n);
	cout<<ans<<"\n";
}