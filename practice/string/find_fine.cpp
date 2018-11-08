#include <iostream>
#include <map>

using namespace std;

int main(){
	int t,n,date;
	cin>>t;

	while(t--){
		int ans=0;
		cin>>n>>date;
		int car_no[n], penality[n];
		for(int i=0;i<n;i++)
			cin>>car_no[i];
		for(int i=0;i<n;i++)
			cin>>penality[i];
		if(date%2){
			for(int i=0;i<n;i++){  //odd
				if(car_no[i]%2==0)
					ans+=penality[i];
			}
		}
		else{
			for(int i=0;i<n;i++){
				if(car_no[i]%2)
					ans+=penality[i];
			}
		}
		cout<<ans<<"\n";
	}
} 