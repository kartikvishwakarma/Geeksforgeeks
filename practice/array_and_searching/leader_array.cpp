#include <iostream>
#include <algorithm>
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
		
		for(int i=0;i<n;i++){
			p = upper_bound(a+i, a+n, a[i])-a;
			cout<<p<<" ";
		}
		cout<<"\n";
	}
}