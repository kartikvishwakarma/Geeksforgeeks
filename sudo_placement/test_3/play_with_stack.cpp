#include <iostream>
#include <stack>

using namespace std;

void solve(int a[], int n){
	stack<int>b;
	int required=1;
	int transfer=0;

	for(int i=0;i<n;i++){
		if(a[i] == required){
			required++;
			transfer++;
		}
		else{
			if(!b.empty() && a[i]>b.top()){
				cout<<"NO\n";
				return;
			}
			else{
				b.push(a[i]);
				transfer++;
			}
		}

		while(!b.empty() && b.top() == required){
			required++;
			transfer++;
			b.pop();
		}
	}
	cout<<"YES "<<transfer<<"\n";
}

int main(){
	int t,m,n;
	cin>>t;

	while(t--){
		cin>>m;
		int a[m];
		for(int i=0;i<m;i++)
			cin>>a[i];

	solve(a,m);
	}
}