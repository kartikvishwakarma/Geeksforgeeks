#include <iostream>
#include <cmath>

using namespace std;

int gray_to_bin(int n){
	int bit = log2(n)+1;
	//cout<<bit<<" | ";
	int p = 0;//n>>(bit-1);

	for(int i=1; i<=bit;i++)
		p = p^(n>>(bit-i));

	return p;
}

int main(){
	int t,n;

	cin>>t;

	while(t--){
		cin>>n;
		int ans = gray_to_bin(n);
		cout<<ans<<"\n";
	}
}