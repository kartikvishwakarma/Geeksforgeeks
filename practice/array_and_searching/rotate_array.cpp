#include <iostream>
using namespace std;

void reverse(int a[], int n){
	if(n==0)
		return;
	cout<<a[n-1]<<" ";
	reverse(a,n-1);
	
} 


int main(){
	int t,n,p,d;

	cin>>t;

	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];
		//cin>>d;
		reverse(a,n);
		cout<<"\n";
	}
}