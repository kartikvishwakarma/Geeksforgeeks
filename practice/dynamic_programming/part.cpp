#include <iostream>

using namespace std;

int max_of(int a[], int n, int k){
	if(n==0)
		return 0;

	if(n && k==1){
		int ans = a[0];
		for(int i=1; i<n; i++)
			ans = max(ans,a[i]);
		return ans;
	}

	return max(a[n-1]+max_of(a,n-1,k-1), max_of(a,n-1,k));
}

int main(){
	int a[] = {1,2,3,4,5};
	int k=3;
	int n = sizeof(a)/sizeof(a[0]);

	int res = max_of(a,n,k);
	cout<<res<<"\n";
}