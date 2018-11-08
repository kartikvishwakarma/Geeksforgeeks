#include <iostream>

using namespace std;

int no_paint(int n, int k){
	int total[n+1],same,diff;
	same=0;
	diff=k;
	total[1]=k;

	for(int i=2;i<=n;i++){
		same=diff;
		diff=total[i-1]*(k-1);
		total[i]=same+diff;
	}
	return total[n];
}

int main(){
	int n=2;
	int k=4;
	int ans = no_paint(n,k);

	cout<<ans<<"\n";
}