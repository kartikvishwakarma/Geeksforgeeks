#include <iostream>

using namespace std;

int ldc(int a[], int n){
	int len[n];
	for(int i=0; i<n;i++)
		len[i]=1;

	for(int i=1; i<n;i++){
		for(int j=0; j<i; j++){
			if(a[i]<a[j] && len[i]<len[j]+1)
				len[i]=len[j]+1;
		}
	}
	for(int i=0;i<n;i++)
		cout<<len[i]<<" ";
	cout<<"\n";

	int ans = len[0];
	for(int i=1;i<n;i++){
		ans = max(ans,len[i]);
	}

	return ans;
}

int main(){
	int a[] = { 15, 27, 14, 38, 63, 55, 46, 65, 85 };
	int n = sizeof(a)/sizeof(a[0]);

	int ans = ldc(a,n);
	cout<<ans<<"\n";
}