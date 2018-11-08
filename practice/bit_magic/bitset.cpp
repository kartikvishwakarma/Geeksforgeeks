#include <iostream>
#include <bitset>
#define N 10000000
// bitset support upto 1e7 only

using namespace std;

int main(){
	bitset<N> bit(23);
	bitset<N> bit2(2);
	cout<<bit<<"\n";
	cout<<bit2<<"\n";
	cout<<(bit&~bit2)<<"\n";
}