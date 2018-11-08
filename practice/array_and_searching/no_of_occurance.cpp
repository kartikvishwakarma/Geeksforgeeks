#include <iostream>

using namespace std;

int min_index(int a[], int x, int l, int n){
	int r = n-1;
	while(l<=r){
		int mid = (l+r)>>1;
		if(( mid==0 || a[mid-1]<a[mid]) && a[mid] == x)
			return mid+1;

		else if(a[mid]<x)
			l=mid+1;
		else
			r=mid-1;
	}
	return -1;
}

int max_index(int a[], int x, int l, int n){
	int r = n-1;
	while(l<=r){
		int mid = (l+r)>>1;

		if((mid==n-1 || a[mid]<a[mid+1]) && a[mid]==x)
			return mid+1;
		
		else if(a[mid]>x)
			r=mid-1;
		else
			l=mid+1;
	}
	return -1;
}

int main(){
	int t,n,x;

	cin>>t;

	while(t--){
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		int l_ind = min_index(a,x,0,n);
		int u_ind = max_index(a,x,0,n);
		if(u_ind == -1 || l_ind == -1)
			cout<<"-1\n";
		else 
			cout<<u_ind - l_ind+1<<"\n";
	}
}