#include <iostream>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;

const int size = (int)1e3+1;
int N,T,S,A[size];

unordered_map<int,int> agg_sum;

void solve(){
	int sum=0;

	for(int i=1;i<=N;i++){
		sum+=A[i];

		if(sum==S){
			//cout<<"ping\n";
			cout<<"1 "<<i<<"\n";
			return;
		}

		if(agg_sum.find(sum-S) != agg_sum.end()){
			//cout<<"pong\n";
			cout<<agg_sum[sum-S]+1<<" "<<i<<"\n";
			return;
		}

		agg_sum[sum]=i;
	}
	agg_sum.clear();

	cout<<"-1\n";
	return;
}

int main(){
	cin>>T;

	while(T--){
		cin>>N>>S;

		for(int i=1;i<=N;i++)
			cin>>A[i];
		
		solve();

	}
}