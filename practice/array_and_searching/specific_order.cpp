#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> odd, even;

int main(){
	int T,n,k,ans;

	cin>>T;

	while(T--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2)
				odd.push_back(a[i]);
			else 
				even.push_back(a[i]);

		}

		sort(odd.begin(), odd.end(), greater<int>());
		sort(even.begin(), even.end());
		
		for(int i=0;i<odd.size();i++)
			cout<<odd[i]<<" ";

		for(int i=0;i<even.size();i++)
			cout<<even[i]<<" ";
		

		cout<<"\n";
		odd.clear();
		even.clear();
	}
}