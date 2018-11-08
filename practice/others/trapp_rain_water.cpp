#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int left[n]={0}, right[n]={0};
	//left[] = {0}, right[] = {0};


	for(int i=0;i<n;i++)
		cin>>a[i];
	
	left[0]=a[0];
	right[n-1]=a[n-1];

	for(int i=1;i<n;i++)
		left[i]=max(left[i-1], a[i]);	

	for(int i=n-2;i>=0;i--)
		right[i]=max(right[i+1], a[i]);

	long long s=0;

	for(int i=1;i<n-1; i++){
		s+=(long long) min(left[i],right[i])-a[i];
	}

	cout<<s<<"\n";

}