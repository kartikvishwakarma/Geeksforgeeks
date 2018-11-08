#include <iostream>

using namespace std;

int main(){
	int t,n,s,sum;

	cin>>t;

	while(t--){
		sum=0;
		cin>>n>>s;

		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int start=0;
		int end=n-1;
		bool flag=false;
		while(end<n && start<n){
			if(sum+a[end]==s){
				flag=true;
				cout<<start+1<<" "<<end+1<<"\n";
				break;
			}

			else if(sum+a[end]<s){
				sum+=a[end];
				end++;	
				//cout<<sum<<" - "<<a[end]<<"\n";	
			}
			else if(sum+a[end]>s){
				sum-=a[start];
				start++;
			}
		}
		if(!flag)
			cout<<"-1\n";
	}
}