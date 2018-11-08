#include <iostream>
#include <climits>
using namespace std;

int prod(int l, int r, int a[]){
	int tmp=1;
	for(int i=l; i<r; i++)
		tmp*=a[i];

	return tmp;
}

int max_prod(int a[], int n, int m){
	if(n==0 || m==n)
		return 1;
	//cout<<"222!!!\n";
	//int p[n] = {1};
	int ans=INT_MIN;
	for(int i=1; i<m;i++){
		for(int j=0; j<n-i;j++){
			int res= prod(j,j+i, a)*max_prod(a,n, j+i);
			if(res > ans)
				ans = res;
		}
	}
	return ans;
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		int res = max_prod(a,n,3);

		cout<<res<<"\n";
	}
}