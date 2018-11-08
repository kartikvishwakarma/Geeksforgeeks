#include <iostream>

using namespace std;

int second_large(int a[], int n){
	int max_1=0, max_2=0;

	for(int i=0;i<n;i++){
		if(a[i]>max_1)
			max_1=a[i];
	}

	for(int i=0;i<n;i++){
		if(a[i]>max_2 && a[i]<max_1)
			max_2=a[i];
	}
	return max_2;
}

int main(){
	int n,t;

	cin>>t;

	while(t--){
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		int ans = second_large(a,n);
		cout<<ans<<"\n";
	}
}