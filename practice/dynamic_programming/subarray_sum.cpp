#include <iostream>

using namespace std;

int max_subarray_sum(int a[], int n){
	if(n==0)
		return 0;
	return max(a[n-1]+max_subarray_sum(a,n-1), a[n-1]);
}

int lcis(int a[], int n){
	int len[n+1] = {1};
	int sum[n+1];
	for(int i=0;i<n;i++)
		sum[i]=a[i];

	for(int i=1;i<n;i++){
		
		for(int j=0;j<i;j++){
					
			if(a[i]>a[j] && sum[i]<sum[j]+a[i]){
				sum[i]=sum[j]+a[i];
			}
		}
	}
	int Max=sum[0],idx;
	for(int i=1;i<n;i++){
		if(Max<sum[i]){
			Max = sum[i];
			idx=i;
		}
	}

	cout<<"max value of length is "<<Max<<"\n";
	return Max;

}

int main(){
	//int a[] = {34,-50,42,14,32,-5,86};
	int a[] = {5,4,3,10};
	int n = sizeof(a)/sizeof(a[0]);

	//int ans = max_subarray_sum(a,n);
	int ans = lcis(a,n);
	cout<<ans<<"\n";
}