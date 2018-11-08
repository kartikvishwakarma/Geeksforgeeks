#include <iostream>

using namespace std;

int solve(int a[], int n){

	int ans = a[0];
	int left_max=ans;
	int right_max = ans;
	int idx=0;

	for(int i=1;i<n;i++){
		cout<<a[i]<<" : "<<ans<<"\n";
		if(a[i]>ans){
			left_max = ans;
		}
		if(a[i]>)
	}

	if(idx==0||idx==n-1)
		return -1;
	return ans;
}

int main(){
	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];
		int ans = solve(a,n);

		cout<<ans<<"\n";
	}
}