#include <iostream>

using namespace std;

int search(int a[], int b[], int l, int r){
	while(l<=r){
		int mid = (l+r)>>1;

		if(a[mid-1]==b[mid-1] && a[mid]!=b[mid])
			return mid;

		else if(a[mid]==b[mid])
			l =  mid+1;
		else if(a[mid+1] != b[mid+1] && a[mid] != b[mid])
			r = mid-1;
	}
	return -1;
}

int main(){
	int t,n;

	cin>>t;

	while(t--){
		cin>>n;

		int a[n], b[n-1];
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<n-1;i++)
			cin>>b[i];

		int ans = search(a,b,0,n-1);
		cout<<ans<<"\n";
	}
}