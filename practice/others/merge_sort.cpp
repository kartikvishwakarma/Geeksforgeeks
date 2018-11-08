#include <iostream>

using namespace std;

void show(int a[], int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
}

void merge(int a[], int l, int mid, int r){
	int n1=mid-l+1;
	int n2=r-mid;
	int left[n1], right[n2];

	for(int i=0; i<n1; i++)
		left[i]=a[l+i];

	for(int i=0; i<n2; i++)
		right[i]=a[mid+i+1];

	int i=0, j=0, k=l;
	int c[n1+n2];
	while(i<n1 && j<n2){
		if(left[i]<=right[j]){
			a[k]=left[i];
			i++;
		}
		else{
			a[k]=right[j];
			j++;
		}
		k++;
	}

	while(i<n1){
		a[k]=left[i];
		k++; i++;
	}

	while(j<n2){
		a[k]=right[j];
		k++; j++;
	}
}

void merge_sort(int a[], int l, int r){
	if(l<r){
		int mid = l+(r-l)/2;
		merge_sort(a, l, mid);
		merge_sort(a, mid+1, r);
		merge(a, l, mid, r);
	}
}

int main(){
	int a[] = {3,2,3,8,5,6,4,1};
	int n = sizeof(a)/sizeof(a[0]);
	show(a,n);
	merge_sort(a, 0, n-1);
	show(a,n);
}