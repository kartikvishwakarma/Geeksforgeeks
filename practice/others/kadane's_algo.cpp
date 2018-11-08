#include <iostream>
#include <climits>
using namespace std;

const int size = (int)1e3+1;
int N,T,A[size];

void kadane(){
	int all_sum, curr_sum;
	all_sum=INT_MIN;
	curr_sum=0;

	for(int i=0;i<N;i++){
		curr_sum+=A[i];

		if(all_sum<curr_sum)
			all_sum=curr_sum;

		if(curr_sum<0)
			curr_sum=0;

	}

	cout<<all_sum<<"\n";
}

int main(){
	cin>>T;

	while(T--){
		cin>>N;

		for(int i=0;i<N;i++)
			cin>>A[i];

		kadane();
	}
}