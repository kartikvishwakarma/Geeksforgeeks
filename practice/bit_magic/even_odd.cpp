#include <iostream>

using namespace std;

int main(){
	int n,t;
	bool e,o;
	cin>>t;

	while(t--){
		cin>>n;
		int ans=0;
		int max=128;
		int p=4;
		//p = p>>1;
		while(p){
			e = n&max;
			o = n&(max>>1);
			ans = (ans<<1)|o;
			ans = (ans<<1)|e;
			n=n<<2;
			p--;
		}
		cout<<ans<<"\n";
	}
}