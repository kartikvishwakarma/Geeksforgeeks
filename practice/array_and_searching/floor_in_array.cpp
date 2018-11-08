#include <iostream>

using namespace std;

int solve(int a[], int x, int l, int n){
	int r = n-1;

	if(x>=a[r])
		return n-1;
	else if(x<=a[0])
		return -1;
	else {
		while(l<=r){
			int mid = (l+r)>>1;
			//cout<<mid<<"\n";
			if((mid==0|| a[mid-1]<a[mid])&&((a[mid]==x)||(a[mid]<x && a[mid+1]>x) ))
				return mid;
			else if(a[mid]<x)
				l = mid+1;
			else 
				r = mid-1;

		}
	}
	return -1;
} 

int main(){
	int n,t,x;

	cin>>t;
	while(t--){
		cin>>n>>x;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];
		
		int res = solve(a,x,0,n);
		cout<<res<<"\n";
	}
}