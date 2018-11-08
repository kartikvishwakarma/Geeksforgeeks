#include <iostream>

using namespace std;

int main(){
	int t,n,k;

	cin>>t;

	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		cin>>k;

		//int *p = new int[n];

		int mul = n/k;
		int div = mul*k;
		int i;
		for(i=0;i<mul;i++){
			for(int j=0;j<k/2;j++){
				int p=a[k*i + j];
				a[k*i+j] = a[k*i+(k-j-1)];
				a[k*i+(k-j-1)] = p;
			}
			//cout<<a[i]<<" ";
		}
		int res = n-div;

		for(int j=0; j<res/2;j++){
			int p = a[j+div];
			a[j+div]=a[n-j-1];
			a[n-j-1]=p;
		}
		
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
		
	}
}