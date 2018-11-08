#include <iostream>

using namespace std;

int main(){
	 int p=1;
	 int t = 1000;
	for(int i=1;i<32; i++){
		cout<<p<<" "<<t<<"\n";
		p = p<<1;
		t = t>>1;
	}

}