#include <iostream>
using namespace std;


int main(){
	int t,n;

	cin>>t;

	while(t--){
		cin>>n;
		int a[n];
		cin>>a[0];
		for(int i=1;i<n;i++){
			cin>>a[i];
			if(a[i]<a[i-1])
				cout<<a[i]<<" ";
			else 
				cout<<"-1 ";

		}
		cout<<"-1\n";
	}
}