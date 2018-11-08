#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int max_diff(int a[], int n, int m){
	sort(a,a+n);
	int diff=INT_MAX;
	for(int i=0; i<n-m+1; i++){
		diff = min((a[i+m-1] - a[i]), diff);
	}
	return diff;
}

int main(){
	int t,m,n;

	cin>>t;

	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>m;

		int ans = max_diff(a,n,m);
		cout<<ans<<"\n";
	}
}