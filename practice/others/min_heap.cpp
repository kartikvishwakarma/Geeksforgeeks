#include <iostream>

using namespace std;

void swap(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void heapify(int a[], int i, int n){
	int min = i;
	int left = 2*i+1;
	int right = 2*i+2;

	if(right<n && a[right]< a[min])
		 min = right;
		
	if(left<n && a[left] < a[min])
		min = left;

	if(min != i){
		swap(&a[i], &a[min]);
		heapify(a,min,n);	
	}


}

int main(){
	int t,n,k;

	cin>>t;

	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		cin>>k;

		for(int i=n/2-1; i>=0;i--)
			heapify(a,i,n);

		for(int i = n-1; i>n-k; i--){
			swap(&a[0], &a[i]);
			heapify(a,0,i);
		}
		cout<<a[0]<<"\n";
	}
}
