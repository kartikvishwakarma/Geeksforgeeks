#include <iostream>
#include <cmath>

using namespace std;

int minVal(int x, int y){
	return (x<y)?x:y;
}

int getSumUtil(int *st, int ss, int se, int qs, int qe, int si){
	if(qs<=ss && qe>=se)
		return st[si];

	if(se<qs || ss>qe)
		return 0;
	int mid = (ss+se)>>1;
	return getSumUtil(st, ss, mid, qs, qe, 2*si+1)+
			getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}

int getSum(int *st, int n, int qs, int qe){
	if(qs <0 || qe>=n){
		cout<<"Invalid range!!\n";
		return -1;
	}

	return getSumUtil(st,0,n-1,qs,qe,0);
}

int constructUtil(int a[], int ss, int se, int* st, int si){
	if(ss == se){
		st[si]=a[ss];
		return a[ss];
	}

	int mid = (ss+se)>>1;

	st[si] = constructUtil(a,ss,mid,st,2*si+1)+
					constructUtil(a,mid+1,se,st,2*si+2);

	return st[si];
}

int *construct(int a[], int n){
	int x = (int)ceil(log2(n));
	int size = 2*int(pow(2,x))-1;

	int *st = new int[size];

	constructUtil(a,0,size-1,st,0);

	return st;
}

int main(){
	int a[] = {1,3,2,7,9,11};
	int n = sizeof(a)/sizeof(a[0]);

	int *st = construct(a,n);

	cout<<getSum(st,n,1,3)<<"\n";

}