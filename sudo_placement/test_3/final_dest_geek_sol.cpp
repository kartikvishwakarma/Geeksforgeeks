#include <iostream>
#include <queue>
#include <cstring>
#define mod 1000

using namespace std;

int final_dest(int a[], int n, int start, int end){
	queue<int> queu;
	int steps[1001];

	memset(steps, -1, sizeof(steps));

	queu.push(start%mod);
	steps[start]=0;

	while(!queu.empty()){
		int elem =  queu.front();
		queu.pop();

		if(elem == end)
			return steps[end];

		for(int i=0;i<n;i++){
			int tmp = (elem+a[i])%mod;

			if(steps[tmp]==-1){
				steps[tmp] = 1+steps[elem];
				queu.push(tmp);
			}
		}
	}
	return -1;
}

int main(){
	int t,n,l,f;

	cin>>t;

	while(t--){
		cin>>l>>f;
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		int ans = final_dest(a,n,l,f);
		cout<<ans<<"\n";
	}
}