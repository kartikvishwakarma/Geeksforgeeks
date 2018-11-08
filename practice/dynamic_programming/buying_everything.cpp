#include <iostream>
#include <vector>
#include <climits> 

using namespace std;

long long  buy_every(vector<int> v, int m, int k){
	int n = v.size();
	long long ans, tmp=0;

	if(m>n)
		return -1;

	else{
		for(int i=0; i<m;i++){
			if(i==0)
				tmp += v[i];
			else
				tmp += (long long)(v[i] - v[i-1])*k*i;
		}	
	}
	ans = tmp;

	for(int i=m; i<n; i++){
		long long left_val, right_val, reduce;
		reduce = (long long)(v[i-1]-v[i-m])*k;
		left_val = (long long)(v[i-m+1]-v[i-m]);
		right_val = (long long)(v[i] - v[i-1])*(m-1)*k;
		tmp = tmp - reduce + left_val + right_val;
		ans = min(ans, tmp);
	}

	return ans;
}



int main(){
	int t,n,m,k;


	cin>>n>>m>>k;
	bool tmp;
	vector<int> v;

	for(int i=0; i<n;i++){
		cin>>tmp;
		if(tmp)
			v.push_back(i);
	}
	
	long long ans = buy_every(v,m,k);
	cout<<ans<<"\n";
}