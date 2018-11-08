#include <iostream>

using namespace std;

int no_pair(int n){
	if(n<=2)
		return n;
	return no_pair(n-1)+(n-1)*no_pair(n-2);
}

int dp_no_pair(int n){
	int pair[n+1];

	for(int i=0;i<=n;i++){
		if(i<=2)
			pair[i]=i;
		else 
			pair[i]=pair[i-1]+(i-1)*pair[i-2];
	}
	return pair[n];
}

int main(){
	int n = 3;
	int ans = no_pair(n);
	cout<<ans<<"\n";
	ans = dp_no_pair(n);
	cout<<ans<<"\n";

}
