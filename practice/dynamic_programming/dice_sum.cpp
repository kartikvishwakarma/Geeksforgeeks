/*
You have N distinct dice of each A sides numbered 1 to A. How many ways can you roll them all
together to get the sum of top faces as B. Two ways are considered different if one of the dice
has different number on top face in these two ways.
*/


#include <iostream>
#include <climits>

using namespace std;
int N=3,ans;

long long int way=0;

int no_way(int sum, int n){
	if(n==sum){
		return 1;	
	}
	else if(n==0 || sum<n){
		//flag=false;
		return 0;
	}
	//int res = INT_MIN;
	else
		return no_way(sum-1,n)+no_way(sum-1,n-1)-no_way(sum-7,n-1);
}

/*
int no_way(int sum, int n){
	if(sum<0)
		return 0;

	if(n==1){
		if(sum>=1 && sum<=6)
			return 1;
		return 0;
	}

	int sol=0;

	for(int i=1;i<=6;i++)
		sol+=no_way(sum-i,n-1);

	return sol;
}

*/

int main(){
	int sum=60;
	int n=15;
	bool flag=true;
	int ans = no_way(sum,n);
	cout<<ans<<"\n";
}