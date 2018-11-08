#include <iostream>
#include <map>

using namespace std;

void dist_elem(int a[], int n, int k){
	map<int,int> m;
	int diff = 0;
	for(int i=0;i<k;i++){
		if(m[a[i]]==0)
			diff++;
		m[a[i]]++;
	}

	cout<<diff<<" ";

	int i=k;

	while(i<n){
		if(m[a[i-k]]==1)
			diff--;
		m[a[i-k]]--;

		if(m[a[i]]==0)
			diff++;
		m[a[i]]++;
		cout<<diff<<" ";
		i++;
	}	
}

int main(){
	int t,n,k;

	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		dist_elem(a,n,k);
		cout<<"\n";
	}
}