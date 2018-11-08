#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

const int size = (int)1e3+1;
int N,T,A[size];

bool Binary_search(int p, int l, int r){
	while(l<=r){
		int mid = (l+r)>>1;
		if(A[mid]==p)
			return true;

		else if(A[mid]>p)
			r = mid-1;

		else if(A[mid]<p)
			l = mid+1;
	}
	return false;
}


int main(){
	cin>>T;

	while(T--){
		cin>>N;
		int i;
		for(i=1;i<=N-1;i++)
			cin>>A[i];
		sort(A,A+N-1);
		for(i=1;i<=N;i++){
			if(!Binary_search(i,1,N-1))
				break;

		}

		cout<<i<<"\n";
	}
}