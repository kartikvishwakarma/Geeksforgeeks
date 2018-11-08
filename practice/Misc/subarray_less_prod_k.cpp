#include <iostream>

using namespace std;

typedef long long ll;

int solve(int a[], int n, ll k){
	int left, right;
	ll prod = 1;
	int ans=0;

	for(left=0, right=0; right<n; right++){
		prod *= a[right];
		
		while(left<right  && prod >= k){
			prod /= a[left++];
		}

		if(prod<k){
			ans+= 1+(right-left);
		}
	}
	return ans;
}

int main(){
	int t,n;
	ll k;
	cin>>t;

	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0; i<n;i++)
			cin>>a[i];

		int ans = solve(a,n,k);

		cout<<ans<<"\n";
	}
}