#include <iostream>
#include <climits>
using namespace std;

int coin(int a[], int n ,int k){
	//cout<<"bang\n";
	if (k==0)
		return 1;

	if(k<0){
		return 0;
	}

	if(n<=0 && k>=1)
		return 0;

	//int ans=INT_MIN;
	//int res=0;
	
	return coin(a,n,k-a[n-1])+coin(a,n-1,k);
}

int main(){
	int t,n,k;

	cin>>t;
	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		int ans = coin(a,n,k);
		cout<<ans<<"\n";
	}
}