#include <iostream>
#include <cstring>

using namespace std;
//order does not matter here

int no_ways(int a[], int m, int n){
	if(n==0)
		return 1;

	if(n<0)
		return 0;

	if(m<=0 && n>=1)
		return 0;
	

	return no_ways(a,m,n-a[m-1]) + no_ways(a,m-1,n);
}


int dp_no_ways(int a[], int m, int n){
	int score[n+1];
	memset(score, 0, sizeof(score));
	score[0]=1;

	for(int i=3;i<=n;i++)
		score[i]+=score[i-3];
	for(int i=5;i<=n;i++)
		score[i]+=score[i-5];
	for(int i=10;i<=n;i++)
		score[i]+=score[i-10];

	return score[n];
}


int main(){
	int n=20;
	int a[] = {3,5,10};
	int m = sizeof(a)/sizeof(a[0]);
	int ans = no_ways(a,m,n);
	cout<<ans<<"\n";
	ans = dp_no_ways(a,m,n);
	cout<<ans<<"\n";
}