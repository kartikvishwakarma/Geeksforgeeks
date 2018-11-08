#include <iostream>
#include <algorithm>

using namespace std;

bool solve(int arr[], int n){

	for(int a=n-1;a>=0;a--){
		int l=0;
		int r = a-1;

		while(l<r){
			if(arr[l]+arr[r]==arr[a]){
				return true;
			}

			else if(arr[l]+arr[r]>arr[a])
				r--;
			else
				l++;
		}
	}
	return false;
}

int main(){
	int t,n;

	cin>>t;

	while(t--){
		cin>>n;
		int arr[n];

		for(int i=0;i<n;i++)
			cin>>arr[i];

		for(int i=0;i<n;i++)
			arr[i]=arr[i]*arr[i];

		sort(arr,arr+n);
		bool flag = solve(arr,n);

		if(!flag)
			cout<<"No\n";
		else 
			cout<<"Yes\n";
	}
}