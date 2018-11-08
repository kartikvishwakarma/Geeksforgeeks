#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int equation(double a[], int n, double x){
	//cout<<x<<" "<<a[0]<<"\n";
	double left = (1/(x-a[0]));
	double rigth=0;

	for(int i=1;i<n;i++){
		rigth+=(1/(a[i]-x));
	}
	//cout<<left<<" "<<rigth<<" "<<x<<"\n";
	if(abs(rigth-left)<=0.0000000000001)
		return 0;
	else if(rigth-left>0.0000000000001)
		return -1;  // increase  lower bound 
	else 
		return 1;   // decrease upper bound
}

void solve(double a[], int n){
	for(int i=1;i<n;i++){
		double l = a[i-1];
		double r = a[i];
		//cout<<l<<" "<<r<<"\n";
		while(l<=r){
			double mid = (l+r)/2;
			//cout<<mid<<" "<<l<<" "<<r<<"\n";
			int ans = equation(a,n,mid);
			if(ans == 0){
				printf("%.2lf ", mid);
				break;
			}
			else if(ans == -1)
				r = mid-0.00000000000001;
			else 
				l = mid+0.00000000000001;
		}
	}
}

int main(){
	int t,n;
	cin>>t;

	while(t--){
		cin>>n;

		double a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		solve(a,n);
		cout<<"\n";
	}
}

//