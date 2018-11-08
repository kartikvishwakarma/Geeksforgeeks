#include <iostream> 
#include <algorithm>
using namespace std;

int main(){
	int t,n;

	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		sort(a,a+n);

		cout<<a[0]+a[1]<<" "<<a[n-2]+a[n-1]<<"\n";
	}
}