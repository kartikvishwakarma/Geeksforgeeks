#include <iostream>
#include <climits>

using namespace std;

int max_sum(int a[], int n){
	if(n==0)
		return 0;

	return max(a[n-1]+max_sum(a,n-1), max_sum(a,n-1));
}

int main(){
	int t,n;

	cin>>t;

	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		int ans = max_sum(a,n);
		cout<<ans<<"\n";
	}
}