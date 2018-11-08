#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<string> v;


void perm(string str, int l, int n){
	if(l==n){
		v.push_back(str);	
		//cout<<str<<" ";
	}

	for(int i=l;i<n;i++){
		swap(str[l],str[i]);
		perm(str, l+1,n);
		swap(str[l], str[i]);
	}
}

int main(){
	int t;
	string str;

	cin>>t;

	while(t--){
		cin>>str;

		perm(str, 0, str.length());
		sort(v.begin(), v.end());

		for(int i=0;i<v.size(); i++)
			cout<<v[i]<<" ";
		cout<<"\n";
		v.clear();
	}
}