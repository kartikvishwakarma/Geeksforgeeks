#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;


int main(){
	int T,n,k;

	cin>>T;

	while(T--){
		cin>>n>>k;
		int a[n+1];
		int ind;
		int max = INT_MIN;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			//cout<<a[i]<<" ";

			if(i<k){
				if(max<a[i]){
					max=a[i];
					ind = i;
				}
				continue;
			}
			if (i-ind>k)
				max=INT_MIN;

			if(i>=k && a[i]>max){
				max=a[i];
				ind = i;
			}

			cout<<max<<" ";
		}
		cout<<"\n";
	}
}