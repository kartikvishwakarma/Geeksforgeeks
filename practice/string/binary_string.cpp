#include <iostream>

using namespace std;

int main(){
	int t,n,p;
	char ch;
	cin>>t;

	while(t--){
		p=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>ch;
			if(ch=='1')
				p++;

		}

		int ans = p*(p-1)/2;
		cout<<ans<<"\n";

	}
}