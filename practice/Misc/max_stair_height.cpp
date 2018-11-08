#include <iostream>

using namespace std;
typedef long long ll;

ll size = (ll)1e8;

ll val(ll n){
	return (n*(n+1))/2;
}

ll solve(ll l, ll r, ll n){
	
	while(l<=r){
		ll mid = (r+l)>>1;
		//cout<<val(mid)<<" : "<<mid<<" "<<n<<"\n";
		if(val(mid)<=n && val(mid+1)>n){
			//if(val(mid+1))
			return mid;
		}

		else if(val(mid)>n && val(mid+1)>n)
			r = mid-1;
		else
			l = mid+1;
	}
	return -1;
}

int main(){
	int t;
	ll n;

	cin>>t;
	while(t--){
		cin>>n;
		ll ans = solve(1, size, n);
		cout<<ans<<"\n";
	}
}