#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int sum(int a[], int p, int n){
	int total=0;

	for(int i=p;i<=n;i++)
		total+=a[i];

	return total;
}

int partition(int a[], int k, int n){
	if(k==1)
		return sum(a,0,n-1);

	if(n==1)
		return a[0];

	int best = INT_MAX;

	for(int i=1;i<=n;i++){
		best = min(best, max(partition(a,k-1,i), sum(a,i,n-1)));
		//cout<<n<<"/"<<best<<" -- ";
	} 
	return best;
}


int main(){
	int t,k,n,ans;

	cin>>t;

	while(t--){
		cin>>k>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];
		int val=0;
		ans = partition(a,k,n);
		cout<<ans<<"\n";
	}
}