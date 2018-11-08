#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int T,n,k;

	cin>>T;

	while(T--){
		cin>>n;
		int a[n];
		int b[n];
		//bool leader[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
	
		sort(a,a+n);

		int mid = (n-1)/2;
		bool flag=true;
		b[mid]=a[0];
		//cout<<a[0]<<b[mid]<<mid;
		k=1;
		for(int i=mid+1, j=mid-1; i<n || j>=0;){
			if(flag){
				//cout<<i<<" "<<k<<" "<<a[k]<<"\n";
				b[i]=a[k];
				flag=false;
				i++;
			}
			else{
				
				b[j]=a[k];
				flag=true;
				j--;
			}
			k++;
		}

		for(int i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<"\n";
	}
}