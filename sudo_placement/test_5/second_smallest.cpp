#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,t,l,r;
	
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++)
		cin>>a[i];

	cin>>t;
	while(t--){
		cin>>l>>r;

		sort(a+l, a+r);
		if(a[l+1]>a[l])
			cout<<a[l+1]<<"\n";
		else
			cout<<"-1\n";
	}
}