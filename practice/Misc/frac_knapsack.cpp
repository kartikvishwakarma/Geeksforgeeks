#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){
	int t,n;
	double W,k,p;
	cin>>t;

	while(t--){
		cin>>n>>W;

		vector<double> val, weight;
		vector<pair<double, int> > prof;

		for(int i=0;i<n;i++){
			cin>>k>>p;
			val.push_back(k);
			weight.push_back(p);
		}

		for(int i=0;i<n;i++){
			prof.push_back(make_pair(val[i]/weight[i],i));
			//cout<<prof[i].first<<" "<<prof[i].second<<"\n";
		}
		sort(prof.begin(),prof.end(),greater<pair<double,int> >());
		
		double ans=0.0;
		
		int i=0,l=0;
		while(W>0 && i<n ){
			if(W-weight[prof[i].second]>0){
				W -= weight[prof[i].second];
				ans += val[prof[i].second];
			}
			else{
				ans+= W*(prof[i].first);
				break;		
			}
			i++;
		}
		
		printf("%.2lf\n", ans);
	}
}