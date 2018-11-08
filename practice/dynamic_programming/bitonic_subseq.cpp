#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int Max(int a[], int b[], int n){
	int max = a[0]+b[0]-1;
	for(int i=1;i<n;i++){
		if((a[i]+b[i]-1)>max)
			max=a[i]+b[i]-1;
	}
	return max;
}

void show(vector<int> S){
	vector<int>::iterator it;

	for(it=S.begin(); it!= S.end(); it++){
		cout<<*it<<" ";
	}
	cout<<"\n";
}
int bitonic_seq(int a[], int n){
	vector<int> ptr;

	int lis[n+1], lds[n+1];

	for(int i=0;i<=n;i++){
		lis[i]=1;
		lds[i]=1;
	}

	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j] && lis[i]<lis[j]+1){
				lis[i]=lis[j]+1;
				ptr.push_back(a[j]);
			}
		}
	}
	

	for(int i=n-2; i>=0; i--){
		for(int j=n-1; j>i;j--){
			if(a[i]>a[j] && lds[i]<lis[j]+1){
				lds[i]=lds[j]+1;
				ptr.push_back(a[j]);
			}
		}
	}
	int p = Max(lis,lds, n+1);
	//show(ptr);
	return p;
}

int main(){
	int a[] = {1,11,2,10,4,5,2,1};
	int n = sizeof(a)/sizeof(a[0]);
	int ans = bitonic_seq(a,n);
	cout<<ans<<"\n";
}