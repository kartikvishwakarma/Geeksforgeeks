#include <iostream>

using namespace std;

void show(int a[], int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
}

int lis(int a[], int n){
	int len[n]={1};

	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j] && len[i]<len[j]+1)
				len[i]=len[j]+1;
		}
	}
	show(len,n);

	int max = len[0];
	for(int i=1;i<n;i++){
		if(len[i]>max)
			max = len[i];
	}

	return max;
}

int main(){
	int a[] = {10,22,9,33,21,50,41,60};
	int n = sizeof(a)/sizeof(a[0]);

	int ans = lis(a,n);
	cout<<ans<<"\n";

	return 0;	
}