#include <iostream>

using namespace std;

int main(){
	int t,n;

	cin>>t;

	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];
		int indx=-1;
		for(int i=1;i<n;i++){
			if(a[i-1]>a[i]){
				indx=i;
				break;
			}
		}
		cout<<indx<<"\n";
	}
}