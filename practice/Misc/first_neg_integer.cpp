#include <iostream>
#include <deque>

using namespace std;

void first_neg(int a[], int n, int k){
	deque<int >dq;
	int i;
	for(i=0;i<k;i++){
		if(a[i]<0)
			dq.push_back(i);
	}

	for(;i<n;i++){
		if(!dq.empty())
			cout<<a[dq.front()]<<" ";
		else 
			cout<<"0"<<" ";

		while(!dq.empty() && dq.front()<(i-k+1) )
			dq.pop_front();

		if(a[i]<0)
			dq.push_back(i);
	}

	if(!dq.empty())
		cout<<a[dq.front()]<<" ";
	else
		cout<<"0"<<" ";

	cout<<"\n";
}

int main(){
	int t,n,k;
	cin>>t;

	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>k;
		first_neg(a,n,k);	
	}
}