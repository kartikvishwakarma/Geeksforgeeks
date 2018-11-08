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

		int sum_l,sum_r;
		sum_l=0; sum_r=0;

		int i,j;
		i=0; j=n-1;
		bool flag=false;
		while(i<=j){
			if(sum_l==sum_r && i==j){
				cout<<i+1<<"\n";
				flag = true;
				break;
			}
			else if(sum_l<=sum_r){
				sum_l+=a[i];
				i++;
			}
			else{
				sum_r+=a[j];
				j--;
			}
		}
		if(!flag)
			cout<<"-1\n";
		
	}
}