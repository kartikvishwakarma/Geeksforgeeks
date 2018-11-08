#include <iostream>
#include <algorithm>
#include <iterator>
#include <climits>
#include <map>

using namespace std;

void solve(int a[], int b[], int n, int m, int x){
	int diff = INT_MAX;
	int l_tmp, r_tmp;
	int l = 0, r = m-1;

	while(l<n && r>=0){
		if(abs(a[l]+b[r]-x)<diff){
			l_tmp = l;
			r_tmp = r;
			diff = abs(a[l]+b[r]-x);
		}

		else if(a[l]+b[r]>x)
			r--;
		else
			l++;
	}
	cout<<a[l_tmp]<<" "<<b[r_tmp]<<"\n";
}


int main(){
	int t,n,m,x;

	cin>>t;

	while(t--){
		cin>>n>>m;
		int a[n],b[m];

		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<m;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+m);
		cin>>x;
		
		solve(a,b,n,m,x);
	}
}