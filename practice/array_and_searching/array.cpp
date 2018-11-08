#include <iostream>

using namespace std;

int main(){
	int a[] = {1,2,3,4,5};
	int d = 2;
	int n = sizeof(a)/sizeof(a[0]);
	int c[n];
	
	for(int i=0; i<n; i++){
		c[i]=a[(i+d)%n];
	}

	for(int i=0; i<n;i++)
		cout<<c[i]<<" ";
}