#include <iostream>
#include <cmath>
using namespace std;

int pos_bit(int n){
	return log2(n& -n)+1;
}

int get_bit(int m, int n){
	return pos_bit(m^n);
}

int main(){
	int t,n,m,ans;

	cin>>t;
	while(t--){
		cin>>m>>n;
		ans = get_bit(m,n);
		cout<<ans<<"\n";
	}
}