#include <iostream>
#define mod 1000000007
using namespace std;


int main(){
	int n,t;
	long int ans;
	int one, zero;
	cin>>t;

	while(t--){
		ans=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<32;i++){
			one=0; zero=0;

			for(int j=0;j<n;j++){
			//	cout<<(a[i])<<" ";
				if((a[j]&(1<<i)))
					one++;
					
			}
			ans=((ans%mod)+(2*(n-one)*one)%mod)%mod;
		}
		cout<<ans<<"\n";

	}
}