#include <iostream>
#include <algorithm>
//#include <iterator>
#include <queue>
#include <climits>

using namespace std;

int get_Max(queue<int> q, int k){
	//queue<int>::iterator it;
	int Max = INT_MIN; 
	while(!q.empty()){
		Max = max(q.front(), Max);
		q.pop();
	}
	return Max;
}

void solve(int a[], int n, int k){
	queue<int> q;

	int Max = INT_MIN;
	for(int i=0;i<k;i++){
		q.push(a[i]);
		Max = max(a[i],Max);
	}
	int old_max = Max;
	cout<<Max<<" ";

	for(int i=k;i<n;i++){
		int val = q.front();
		q.push(a[i]);
		q.pop();

		if(a[i]>Max)
			Max = a[i];
	
		else if (val==Max)
			Max = get_Max(q,k);

		cout<<Max<<" ";
	}
}

int main(){
	int t,n,k;

	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		solve(a,n,k);
		cout<<"\n";
	}
}