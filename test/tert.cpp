#include <iostream>
#define mod 100000007

using namespace std;

void tert(int n){
	if (n==0){
		//cout<<0;
		return;
	}
	
	tert(n/3);
	cout<<n%3;

	
}

int main(){
	int t,n;
	int ans;
	cin>>t;

	while(t--){
		cin>>n;
		if (n==0)
			cout<<0;
		else 
			tert(n);
		cout<<"\n";
	}
}
