#include <iostream>

using namespace std;

int lcm(int a, int b){
	if(b==0)
		return a;
	return lcm(b,a%b);
}

int main(){
	int t,a,b;

	cin>>t;
	while(t--){
		cin>>a>>b;
		int l = lcm(a,b);
		int h = (a*b)/l;
		cout<<h<<" "<<l<<"\n";
	}
}