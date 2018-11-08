#include <iostream>

using namespace std;

int main(){
	int t,n,s;

	cin>>t;
	while(t--){
		cin>>n;
		int ans=0;
		for(int i=0;i<n;i++){
			cin>>s;
			ans^=s;
		}
		cout<<ans<<"\n";	
	}
}