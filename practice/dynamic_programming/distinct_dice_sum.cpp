#include <iostream>
using namespace std;

int no_of_ways(int n, int sum, int mask){
	if(sum<0)
		return 0;
	if(n==1){
		if(sum>=1 && sum<=6)
			return 1;
		return 0;
	}
	int ans=0;
	for(int i=1;i<=6;i++){
		if((mask&(1<<i))==0)
			ans+=no_of_ways(n-1, sum-i, mask|(1<<i));
	}

	return ans;
}

int main(){
	int n=3;
	int sum=6;
	int mask=0;
	int ans = no_of_ways(n,sum,mask);
	cout<<ans<<"\n";
}