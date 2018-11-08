#include <iostream>

using namespace std;

int no_ways(int n, int m){
	if(n==1 || n==2)
		return n;
	return no_ways(n-1)+no_ways(n-2);
}

int main(){
	int ans = no_ways(4,2);
	cout<<ans<<"\n";
}