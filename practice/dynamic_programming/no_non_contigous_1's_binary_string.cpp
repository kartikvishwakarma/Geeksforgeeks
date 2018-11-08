#include <iostream>

using namespace std;

int no_string(int n){
	int a[n+1],b[n+1];
	a[1]=1;  // string end with 0's
	b[1]=1;	// string end wiht 1's

	for(int i=2;i<=n;i++){
		a[i]=a[i-1]+b[i-1];
		b[i]=a[i-1];
	}

	return a[n]+b[n];  // equivalent to nth fibbonacci number (can be calculated in O(logn))
}

int main(){
	int n=3;
	int ans = no_string(n);
	cout<<ans<<"\n";
}