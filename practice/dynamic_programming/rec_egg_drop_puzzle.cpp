#include <iostream>
#include <climits>

using namespace std;

int egg_drop(int n, int k){
	//cout<<"wow...\n";
	if(k==1 || k==0)
		return k;
	if(n==1)
		return k;
	int ans, res;
	res = INT_MAX;
	for(int i=1; i<=k;i++){
		ans = max(egg_drop(n-1, i-1), egg_drop(n, k-i));
		res = min(ans, res);
	}
	return res+1;
}

int main(){
	int n,k;
	n=2, k=10;
	int ans = egg_drop(n,k);
	cout<<ans<<"\n";
}