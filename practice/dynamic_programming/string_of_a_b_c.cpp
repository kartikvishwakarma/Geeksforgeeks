#include <iostream>

using namespace std;

int no_string(int n, int b, int c){
	if(b<0 || c<0)
		return 0;

	if(n==0)
		return 1;

	if(b==0 && c==0)
		return 1;

	int res=no_string(n-1,b,c); // a consider
	res+=no_string(n-1, b-1,c);
	res+=no_string(n-1,b,c-1);

	return res;
}

int main()
{
	int n,b,c;

	n=3;
	b=1; c=2;

	int ans = no_string(n,b,c);
	cout<<ans<<"\n";
}