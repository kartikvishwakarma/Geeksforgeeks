#include <bits/stdc++.h>
using namespace std;

bool no_ones(int n){
	int p=0;

	while(n && p<=3){
		n=n&(n-1);
		p++;
	}
	//cout<<p<<" ";
	if(p>3)
		return false;

	return true;
}

void solve(int l, int r){
	int p=0;
	for(int i=l;i<=r;i++){
		if(no_ones(i))
			p++;
	}
	cout<<p<<"\n";
}

int main()
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,q,l,r;

    cin>>t;

    while(t--){
    	cin>>q;

    	for(int i=0;i<q;i++){
    		cin>>l>>r;

    		solve(l,r);
    	}
    }


}   
