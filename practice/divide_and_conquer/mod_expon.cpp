#include <iostream>

using namespace std;

int mod_expon(int a, int b, int c){
	
	if(b==1)
		return a;

	return ((a%c)*mod_expon(a%c, b-1, c)%c);
}


int main(){
	int t,a,b,c,ans;

	cin>>t;

	while(t--){
		cin>>a>>b>>c;

		ans = mod_expon(a,b,c);
		cout<<ans<<"\n";
	}
}