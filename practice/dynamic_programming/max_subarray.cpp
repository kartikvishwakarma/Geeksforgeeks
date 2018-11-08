#include <iostream>
#include <algorithm>
using namespace std;
/*
int max_sum_rec(int a[], int len[], int n){
	if(n==0)
		return 0;

	if(len[n-1]!=-1)
		return len[n-1];

	return len[n-1] = max(max_sum_rec(a,len, n-1)+a[n-1],a[n-1]);
}

int max_sum(int a[], int n){
	int len[n+1];
	int ans=0;
	for(int i=0;i<n;i++){

		for(int j=0;j<=n;j++)
			len[j]=-1;
		
		ans = max(ans,max_sum_rec(a,len,i));
	}
	return ans;
}
*/
int max_sum(int a[], int p,int n){
	if(n==p)
		return 0;
	int ans = 0;
	for(int i=0;i<p;i++){
	 	int res = max(max_sum(a,i,n)+a[i], a[i]);
	 	ans = max(res,ans);
	 }

	 return ans;
}

int main(int argc, char const *argv[])
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int res = max_sum(a,0,n);
    cout<<res<<"\n";
	return 0;
}