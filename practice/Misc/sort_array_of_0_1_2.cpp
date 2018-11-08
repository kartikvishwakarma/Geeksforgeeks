#include <iostream>

using namespace std;

int main(){
	int t,n,p;
	cin>>t;

	while(t--){
		int a[3]={0};
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>p;
			a[p]++;
		}

		for(int i=0;i<3;i++){
			while(a[i]){
				cout<<i<<" ";
				a[i]--;
			}
		}
		cout<<"\n";
	}
}