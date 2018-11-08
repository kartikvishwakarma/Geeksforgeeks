#include <iostream>

using namespace std;

int solve(int n){
	if(n==1 || n==0)
		return n;
	return 1+solve(n-1)+solve(n-2);

}

int main(){
	int n,t;

	cin>>t;
	while(t--){
		cin>>n;

		int ans = solve(n);
		cout<<ans<<"\n";
		
	}
}