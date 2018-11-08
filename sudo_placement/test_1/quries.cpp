#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <utility>
#include <set>

#define mod 1000000007

using namespace std;

typedef long long int ll;
vector<ll> v;

void preprocess(){
	set<ll> s;
	s.insert(0);

	for(int i=0;i<=60;i++){
		for(int j=i;j<=60;j++){
			for(int k=j;k<=60;k++){
				if(j==i && i==k)
					s.insert(1ll<<i);

				else if(j==k && i!=j){
					ll x = (1ll<<i) + (1ll<<j);
					s.insert(x);
				}

				else if(i==j && i!=k){
					ll x = (1ll<<i) + (1ll<<k);
					s.insert(x);
				}
				else if(i==k && i!=j){
					ll x = (1ll<<i) + (1ll<<j);
					s.insert(x);
				}

				else{
					ll x = (1ll<<i) + (1ll<<j) + (1ll<<k);
					s.insert(x);
				} 
			}
		}
	}

	
	set<ll>::iterator it;
	for(it = s.begin(); it!= s.end(); it++){
		//cout<<*it<<" ";
		v.push_back(*it);
	}
	//cout<<"\n";
}

void solve(vector<pair<ll,ll> >Q, int q){
	for(int i=0;i<q;i++){
		ll l = Q[i].first;
		ll r = Q[i].second;

		//cout<<l<<" "<<r<<"\n";

		if(l>r)
			swap(l,r);

		if(l==0)
			cout<<(upper_bound(v.begin(), v.end(), r)-v.begin())<<"\n";

		else{
			cout<<(upper_bound(v.begin(), v.end(), r) -
					upper_bound(v.begin(), v.end(), l-1))<<"\n"; 
		}
	}

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t,q;
	ll l,r,ans;
	ans=0;
	
	cin>>t;
	preprocess();
	while(t--){
		cin>>q;
		vector<pair<ll,ll> > Q(q);
		for(int i=0;i<q;i++){
			//cin>>l>>r;
			cin>>Q[i].first;
			cin>>Q[i].second;
		}
		solve(Q,q);
		Q.clear();
	} 
	
}