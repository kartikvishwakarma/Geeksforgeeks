#include <iostream>

using namespace std;

bool search(int a[], int n, int x){
	int l=0, r=n-1;
	bool flag = false;

	while(l<r){
		int mid = (l+r)>>1;

		if(a[mid]==x){
			cout<<mid;
			flag = true;
			break;
		}

		else if(a[mid]>x)
			r = mid-1;
		else
			l = mid+1;
	}
	return flag;
}

int main(){
	int t,n,x,tmp;
	cin>>t;

	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cin>>x;

		if(!search(a,n,x))
			cout<<"-1";
		cout<<"\n";
	}
}