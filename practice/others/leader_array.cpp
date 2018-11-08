#include <iostream>
#include <algorithm>
using namespace std;


int Max(int a[], int k, int i, int max){

	for(int j=i;j>i-k;j--){
		if(a[j]>max)
			max = a[j];
	}

	return max;
}

int main(){
	int T,n,k;

	cin>>T;

	while(T--){
		cin>>n>>k;
		int a[n];
		//bool leader[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			//leader[i]=false;
		}
		/*
		int ptr = n-1;
		int max = a[ptr];
		leader[ptr]=true;

		for(int i=n-2;i>=0;i--){
			if(a[i]>max){
				leader[i]=true;
				max = a[i];
			}
		}

		for(int i=0;i<n;i++){
			if(leader[i])
				cout<<a[i]<<" ";
		}
		cout<<"\n";
	}*/
		//int max = INT_MIN;
		int max;
		for(int i=k-1;i<n;i++){
			max = Max(a,k,i,0);
			cout<<max<<" ";
		}
		cout<<"\n";

	}
}