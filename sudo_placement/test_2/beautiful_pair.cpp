#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<int> S;

bool beautiful_pair(int a[], int b[], int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(S.find(b[j]-a[i]) != S.end())
				return true;
		}
		S.insert(a[i]);
	}
	return false;
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

		int ans = beautiful_pair(a,b,m,n);
		cout<<ans<<"\n";
	}
}