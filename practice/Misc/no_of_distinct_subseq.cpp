#include <iostream>
#include <vector>
#define MAX_SIZE 1000
#define mod 1000000007
using namespace std;

int sub_seq(string str){
	int n = str.length();
	vector<int> last(MAX_SIZE, -1);

	long dp[n+1];

	dp[0]=1;

	for(int i=1; i<=n;i++){
		dp[i] = (2*(dp[i-1])%mod)%mod;

		if(last[str[i-1]] != -1)
			dp[i] = dp[i] - dp[last[str[i-1]]];

		last[str[i-1]] = i-1;
		
		if(dp[i]<0)
			dp[i] += mod;
	}
	return dp[n]; 
}

int main(int argc, char const *argv[])
{
	int t;
	string str;
	cin>>t;
	while(t--){
		cin>>str;

		long ans = sub_seq(str);
		cout<<ans<<"\n";
	}
	return 0;
}