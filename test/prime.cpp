#include <bits/stdc++.h>
using namespace std;


int main(){
	int t,n,m,ans;
	cin>>t;

	while(t--){
		cin>>n>>m;
		if (m==0)
			ans = n;
		else
			ans = n-(n/m);
		cout<<ans<<"\n";
		}
}