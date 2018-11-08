#include <iostream>

using namespace std;

int lcis(int a[], int b[], int m, int n){
	int val[n];
	for(int i=0;i<n;i++)
		val[i]=0;

	for(int i=0;i<m;i++){
		int ans=0;
		for(int j=0;j<n;j++){
			if(a[i]==b[j]){
				// update val value for common no by 1
				if(ans+1 > val[j])
					val[j]=1+ans;
			}

			if(a[i]>b[j]){
				// assign ans value to max len value found so-far
				if(val[j]>ans)
					ans=val[j];
			}
		}	
	}

	int res=0;

	for(int i=0;i<n;i++)
		res = max(val[i],res);

	return res;
}

int main(){
	int t,m,n;

	cin>>t;

	while(t--){
		cin>>m;
		int a[m];

		for(int i=0;i<m;i++)
			cin>>a[i];

		cin>>n;
		int b[n];

		for(int i=0;i<n;i++)
			cin>>b[i];

		int ans=lcis(a,b,m,n);
		cout<<ans<<"\n";
	}
}