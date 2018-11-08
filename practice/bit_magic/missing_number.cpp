#include <iostream>

using namespace std;

int missing_no(int a[], int n){
	int x1=a[0];
	int x2=1;

	for(int i=1;i<n-1;i++)
		x1=x1^a[i];

	for(int i=2;i<=n;i++)
		x2=x2^i;

	return (x1^x2);
}

int main(){
	int t,n,ans;

	cin>>t;	

	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n-1;i++)
			cin>>a[i];

		ans = missing_no(a,n);
		cout<<ans<<"\n";
	}
}