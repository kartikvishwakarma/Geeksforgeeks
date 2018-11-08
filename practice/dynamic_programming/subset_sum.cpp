#include <iostream>

using namespace std;
/*
bool subset_sum(int s[], int n, int k){
	if(n==0 && k != 0)
		return false;
	if(k==0)
		return true;
	if(s[n-1]>k)
		return subset_sum(s,n-1,k);

	return (subset_sum(s,n-1, k-s[n-1]) || subset_sum(s,n-1,k));
}
*/

bool subset_sum(int s[], int n, int sum){
	bool set[n+1][sum+1];

	for(int i=0;i<=n;i++){
		for(int j=0;j<=sum;j++){
			if(i==0 && j)
				set[i][j]=false;
			else if(j==0)
				set[i][j]=true;
			else if(s[i]>j)
				set[i][j]=set[i-1][j];
			else{
				set[i][j] = (set[i][j-s[i]] || set[i][j]);
				if(set[i][j])
					cout<<s[i]<<" ";
			}
		}
	}
}
int main(){
	int s[] = {12,1,61,5,9,2};
	int n = sizeof(s)/sizeof(s[0]);
	int k=24;

	int ans = subset_sum(s,n,k);
	cout<<ans<<"\n";
}