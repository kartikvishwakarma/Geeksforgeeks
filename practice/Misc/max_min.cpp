#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t,n,k;

	cin>>t;

	while(t--){
		
		cin>>n;
		cin>>k;
		int a[n];

		for(int i=0; i<n;i++)
			cin>>a[i];

		sort(a,a+n);
		int ans = a[k-1]-a[0]; 
		cout<<ans<<"\n";
	}
}

