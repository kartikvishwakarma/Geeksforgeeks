#include <iostream>

using namespace std;
/*
int no_ways(int n){
	if(n==1 || n==2)
		return n;
	return no_ways(n-1)+no_ways(n-2);
}
*/
int no_ways(int n){
	int ans[n+1];
	ans[1]=1;
	ans[2]=2;
	ans[0]=0;

	for(int i=3;i<=n;i++)
		ans[i]=ans[i-1]+ans[i-2];

	return ans[n];
}

int main(){
	int ans = no_ways(4);
	cout<<ans<<"\n";
}