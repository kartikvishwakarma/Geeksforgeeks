#include <iostream>
#include <algorithm>
using namespace std;

int type_arr(int a[], int n){
	int *Min = min_element(a,a+n);
	int *Max = max_element(a,a+n);
	cout<<*Max;
	if(a[0]==*Min && a[n-1]==*Max)
		return 1;
	else if(a[n-1]==*Min && a[0]==*Max)
		return 2;

	else{
		for(int i=0;i<n;i++){
			if((i==0 && a[i]<a[i+1] && a[i+1]>a[i+2]) || (a[i]<a[i-1] && a[i]<a[i+1] && a[i-1]<a[i+1]))
				return 3;
			else if((i==n-1 && a[i]<a[i-1] && a[i-1]>a[i-2])|| (a[i]<a[i-1] && a[i]<a[i+1] && a[i-1]>a[i+1]))
				return 4;
		}
	}
	return -1;

}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		int index = type_arr(a,n);
		cout<<" "<<index<<"\n";
	}
}