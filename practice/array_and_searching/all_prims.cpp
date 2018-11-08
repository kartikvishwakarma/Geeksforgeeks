#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

vector<int> primes;

const int n = (int)1e7;
static bool a[n+1];

void sieveOf(){
	
	memset(a,true, sizeof(a));

	for(int i=2;i*i<=n; i++){
		if(a[i]==true){
			for(int j=2*i; j<=n;j+=i)
				a[j]=false;
		}
	}

	
	for(int i=2;i<=n;i++){
		if(a[i] && a[i+2]){
			primes.push_back(i+2);
			//cout<<i<<" ";
		}
	}
	//cout<<"code goes here...\n";
	/*
	int ans=0;
	for(int i=0;i<primes.size(); i++){
		cout<<primes[i]<<" ";
	}

	//for(int )
	cout<<"\n";*/
}

int search(int a){
	int l=0, r=primes.size();
	return upper_bound(primes.begin(),primes.end(),a)-primes.begin();
}

int main(){
	int t,n;
	//cout<<"started..\n";
	int max_n = 9999942;//(int)1e6;
	sieveOf();
	//cout<<"ended..\n";
	cin>>t;
	while(t--){
		cin>>n;
		int ans = search(n);
		cout<<ans<<"\n";
	}
	return 0;
}