#include <iostream>
//#include <vector>
using namespace std;

int sub_string(int a[], int b[], int n, int m){
	int table[m], p[m];
	//vector <int> parent;

	for(int i=0;i<m;i++){
		table[i]=0;
		p[i]=0;
	}

	for(int i=0;i<n;i++){
		int pos=0;
		for(int j=0; j<m;j++){
			if(a[i]==b[j] && pos+1 > table[j]){
				table[j]=1+pos;
				p[pos+1] = a[i];
			}

			if(a[i]>b[j] && table[j]>pos)
				pos = table[j];
		}
	}

	int ans = table[0];
	for(int i=1;i<m;i++)
		ans = max(ans,table[i]);

	for(int i=0;i<m;i++){
		if(p[i])
			cout<<p[i]<<" ";
	}
	cout<<"\n";
	return ans;
}

int lis(int a[], int n){
	int len[n+1];
	for(int i=0; i<=n;i++)
		len[i]=1;

	for(int i=1; i<=n;i++){
		for(int j=0; j<i; j++){
			if(a[i]>a[j] && len[j]+1 > len[i])
				len[i]=len[j]+1;
		}
	}
	int ans = len[0];
	for(int i=1; i<=n;i++)
		ans = max(ans, len[i]);

	return ans;
}

int main(){
	int t,n,m;

	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		cin>>m;
		int b[m];
		for(int i=0;i<m;i++)
			cin>>b[i];

		int ans = sub_string(a, b, n, m);
		int tmp = lis(a,n);
		cout<<ans<<" "<<tmp<<"\n";
	}
}