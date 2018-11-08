#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
	int t,n,m;

	cin>>t;

	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		cin>>m;
		sort(a,a+n);
		/*
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		*/
		int mini = INT_MAX;
		int diff;
		for(int i=0;i<n;i+=m){
			if(i+m<n){
				diff = a[i+m-1]-a[i];
			}
			else if(i+m>=n){
				diff = a[n-1]-a[i];
			}
			mini=min(mini,diff);
//			cout<<mini<<"\n";
		}
		cout<<mini<<"\n";
	}
}