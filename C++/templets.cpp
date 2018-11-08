#include <iostream>

using namespace std;

template <class T>

void bubble_sort(T a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=n-1;i<j; j--)
			if(a[j]<a[j-1])
				swap(a[j], a[j-1]);
	}
}

template <class T>

void swap(T &a, T &b){
	T tmp = a;
	a=b;
	b=tmp;
}


int main(){
	int a[5] = {10,50,40,30,20};
	int n = sizeof(a)/sizeof(a[0]);

	bubble_sort(a,n);

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
}