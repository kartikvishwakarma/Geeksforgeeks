#include <iostream>
#include <algorithm>

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
		if(find(a,a+n,k) == a+n)
			cout<<"-1\n";
		else{
			int s,l;
			s = lower_bound(a,a+n,k)-a;
			l = upper_bound(a,a+n,k)-a;

			cout<<s<<" "<<l-1<<"\n";
		}
	}
}