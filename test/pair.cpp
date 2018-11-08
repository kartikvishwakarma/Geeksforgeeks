#include <bits/stdc++.h>

using namespace std;

unordered_set<int> val;

bool solve(int a[], int b[], int n1, int n2){
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			if(val.find(b[j]-a[i])!= val.end())
				return true;
		}
		val.insert(a[i]);
	}
	return false;
}

int main(){
	int t,n1,n2;

	cin>>t;

	while(t--){
		cin>>n1;
		int a[n1];
	
		for(int i=0;i<n1;i++){
			cin>>a[i];
			val.insert(a[i]);
		}

		cin>>n2;
		
		int b[n2];

		for(int i=0;i<n2;i++)
			cin>>b[i];

		bool res = solve(a,b,n1,n2);
		//show(a,n1);
		//show(b,n2);

		if(res)
			cout<<"1\n";
		else
			cout<<"0\n";
		
		val.clear();
	}
}