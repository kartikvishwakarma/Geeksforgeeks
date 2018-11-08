#include <iostream>

using namespace std;

int total_bit(int n){
	int i=0;
	int ans=0;

	while((1<<i)<=n){

		bool k=0;
		int change=1<<i;

		for(int j=0;j<=n;j++){
			ans+=k;

			if(change==1){
				k=!k;
				change=1<<i;
			}
			else 
				change--;
		}
		i++;
	}
	return ans;
}

int main(){
	int t,n;

	cin>>t;

	while(t--){
		cin>>n;

		int ans = total_bit(n);

		cout<<ans<<"\n";
	}
}