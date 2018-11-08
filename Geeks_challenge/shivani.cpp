#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}

		sort(a,a+n);

		for(int i=n-1; i>=1; i--){
			if(a[i]-1 == a[i-1]){
				sum-=a[i-1];
				i--;
			}
		}
		cout<<sum<<"\n";
	}
}