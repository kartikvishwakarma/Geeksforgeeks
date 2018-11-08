#include <iostream>

using namespace std;
int x,y,n;

int solve(int a[], int b[], int i, int j,int val){
	if(i==x)
		return 0;
	if(j==y)
		return 0;


	return max(solve(a,b,i+1,j, val+a[i]),solve(a,b,i,j+1, b[j]+val));
}


int main(){
	int t;

	cin>>t;
	while(t--){
		cin>>n>>x>>y;
		int a[n],b[n];

		for(int i=0;i<n;i++)
			a[i];
		for(int i=0;i<n;i++)
			b[i];
		
		int ans = solve(a,b,0,0,0);
		cout<<ans<<"\n";
	}
}