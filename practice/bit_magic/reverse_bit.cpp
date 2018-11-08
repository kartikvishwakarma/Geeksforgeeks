#include <iostream>
#include <climits>
using namespace std;

unsigned int reverse(unsigned int  n){
	unsigned int count = sizeof(n)*8-1;
	unsigned int reverse = n;

	n=n>>1;

	while(n){
		reverse = reverse<<1;
		reverse = reverse | (n&1);
		n=n>>1;
		count--;
	}
	reverse = reverse<<count;
	return reverse;
}

int main(){
	unsigned int t,n,ans;

	cin>>t;

	while(t--){
		cin>>n;
		ans = reverse(n);
		cout<<ans<<"\n";
	}
}