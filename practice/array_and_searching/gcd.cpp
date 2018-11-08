#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int n, int k){
	if(k==0)
		return n;
	GCD(k, n%k);
}


int main(){
	int T,n,k,ans;

	cin>>T;

	while(T--){
		cin>>n>>k;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		int l,r;

		l = lower_bound(a,a+n, k)- a;
		//r = upper_bound(a,a+n, k)-a;
		//cout<<a[l-1]<<" "<<a[r-1]<<"\n";
		//cout<<l<<" @ ";
		if (l==0)
			ans = a[l];
		else
			ans = ((k-a[l-1])>=(a[l]-k))?a[l]:a[l-1];
		
		cout<<ans<<"\n";
	}
}