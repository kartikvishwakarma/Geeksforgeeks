#include <iostream>
#include <algorithm>
using namespace std;


void show(int p[], int n){
	for(int i=0;i<n;i++)
		cout<<p[i]<<" ";
	cout<<"\n";
}

int Max(int p[], int n){
	int max = p[0];
	for(int i=1;i<n;i++){
		if(max<p[i])
			max = p[i];
	}
	return max;
}

int solve(int a[], int n){

	int *sum = new int[n];

	for(int i=0;i<n;i++){
		sum[i]=a[i];
	}

	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[j]<a[i] && sum[j]+a[i] > sum[i]){
				sum[i]=a[i]+sum[j];
			}
		}
	}
	int sum_max = Max(sum,n);
	delete(sum);
	return sum_max;
}


int main(){
	int N,T;
	cin>>T;
	while(T--){
		cin>>N;
		int A[N];

		for(int i=0;i<N;i++)
			cin>>A[i];

		int ans = solve(A,N);
		cout<<ans<<"\n";
	}
}