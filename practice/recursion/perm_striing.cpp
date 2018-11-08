#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void perm_str(string str, int l, int r, vector<string> &v){
	int i;

	if(l==r){
		//cout<<str<<" ";
		v.push_back(str);
	}
	for(i=l;i<=r;i++){
		swap(str[l],str[i]); //unordering 
		perm_str(str, l+1, r,v);
		swap(str[l],str[i]); //reordering
	}
}


int main(){
	int t,n;
	string str;

	cin>>t;

	while(t--){
		cin>>str;
		n = str.length();
		vector<string> v;
		perm_str(str,0,n-1,v);
		sort(v.begin(), v.end());
		
		for(int i=0;i<v.size(); i++)
			cout<<v[i]<<" ";
		cout<<"\n";
	}
}