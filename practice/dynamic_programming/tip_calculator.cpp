#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <utility>
using namespace std;


//ans=47
bool comp(const pair<int,int>&a, const pair<int,int>&b){
	return a.first>b.first;
}

int max_tip(pair<int,int> a[], pair<int,int> diff[], int n, int x, int y){
	sort(diff,diff+n, comp);
	
	//for(int i=0;i<n;i++){
	//	cout<<diff[i].first<<" "<<diff[i].second<<"\n";	
	//}

	int idx,ans=0;
	for(int i=0;i<n;i++){
		idx = diff[i].second;
		if((x>0 && (a[idx].first > a[idx].second)) || y==0 ){
			x--;
			ans+=a[idx].first;
		}
		else if((y>0 && (a[idx].first <= a[idx].second)) || x==0){
			y--;
			ans+=a[idx].second;
		}
	}
	return ans;
}

int main(){
	int n,x,y,t,ptr;

	cin>>t;
	while(t--){

		cin>>n>>x>>y;
		pair<int,int> a[n], diff[n];

		for(int i=0;i<n;i++){
			cin>>ptr;
			a[i].first = ptr;
		}
			
		for(int i=0;i<n;i++){
			cin>>ptr;
			a[i].second = ptr;
			diff[i]=make_pair(abs(a[i].first-a[i].second), i);
		}

		int ans = max_tip(a,diff,n,x,y);
		cout<<ans<<"\n";
	}
}