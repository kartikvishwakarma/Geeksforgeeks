#include <iostream>

using namespace std;

int f[100] = {0};

int fib(int n){
	if(n==0)
		return 0;
	if(n==1||n==2)
		return (f[n]=1);

	if(f[n])
		return f[n];

	int k = (n&1) ? (n+1)/2 : n/2;

	f[n] = n&1 ? (fib(k-1)*fib(k-1)+fib(k)*fib(k)) : (2*fib(k-1)+fib(k))*fib(k);

	return f[n]; 
}

int main(){
	int n=9;
	cout<<fib(n)<<"\n";
}