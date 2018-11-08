#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int sum(int a[], int p, int n){
	int total=0;

	for(int i=p;i<n;i++)
		total+=a[i];

	return total;
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
		//ans = partition(a,k,n);

		int l = 0;
		int r = n-1;
		int mid;
		while(l<=r){
			//cout<<l<<" "<<r<<"\n";
			mid = (l+r)>>1;

			if(sum(a,0,l) < sum(a,l,mid))
				l = mid+1;

			else if(sum(a,0,l)>=sum(a,l,mid))
				r = mid-1; 
		}

		cout<<sum(a,0,l)<<"\n";
	}
}