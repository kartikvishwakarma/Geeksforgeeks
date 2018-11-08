#include <iostream>

using namespace std;

int no_of_paths(int curr_r, int curr_d, int m, int n){
	if(curr_r==m || curr_d==n)
		return 1;

	return no_of_paths(curr_r+1,curr_d,m,n)+no_of_paths(curr_r,curr_d+1, m,n);
}

int main(){
	int t,m,n;

	cin>>t;

	while(t--){
		cin>>m>>n;
		int ans = no_of_paths(1,1,m,n);
		cout<<ans<<"\n";
	}
}