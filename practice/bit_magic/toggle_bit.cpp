#include <iostream>
#include <cmath>
using namespace std;

void toggle(int n, int l ,int r){
	int bit = log2(n);
	int a[bit];
	int p=bit;

	for(int i=1<<bit;i>0;i/=2)
		a[p--] = (n&i)?1:0;
	//p=bit;
	int tmp=0;
	for(int i=0;i<=bit;i++){
		if(l<=(i+1) && r >= (i+1)){
			a[i]=a[i]^1;
		}
		tmp+=a[i]*((int)pow(2,i));
	}
	cout<<tmp<<"\n";
}

int main()
{
	int t,n,l,r;

	cin>>t;

	while(t--){
		cin>>n>>l>>r;

		toggle(n,l,r);
	}
}