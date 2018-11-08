#include <iostream>
#include <climits>
using namespace std;

int kadane(int a[], int n){
	int curr_sum=0;
	int total_sum=INT_MIN;

	for(int i=0; i<n; i++){
		curr_sum += a[i];

		if(curr_sum>total_sum)
			total_sum = curr_sum;
		
		else if(curr_sum<0)
			curr_sum=0;

		
	}
	return total_sum;
}

int main(){
	int t,n;

	cin>>t;

	while(t--){
		cin>>n;

		int a[n];

		for(int i=0; i<n; i++)
			cin>>a[i];

		int ans = kadane(a,n);
		cout<<ans<<"\n";
	}
}