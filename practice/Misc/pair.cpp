#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int pairs(vector<int> arr, int k){
	sort(arr.begin(), arr.end());
	int ans=0;

	int p = upper_bound(arr.begin(),
			 arr.end(), k)-arr.begin();
	cout<<arr[p]<<"\n";

	return ans;
}

int main(){
	int n,k,p;

	cin>>n>>k;

	vector<int> arr;

	for(int i=0;i<n;i++){
		cin>>p;
		arr.push_back(p);
	}

	int ans = pairs(arr, k);
	cout<<ans<<"\n";
}