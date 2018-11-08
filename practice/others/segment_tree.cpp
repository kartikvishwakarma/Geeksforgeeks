#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

const int size = (int)1e3+1;
int N,T,A[size];

int *build_tree(int[], int);
int build_tree_rec(int[], int,int,int*,int);


void show(int n, int *B){
	for(int i=0;i<n;i++)
		cout<<*(B+i)<<" ";
	cout<<"\n";
}

int main(){
	cin>>T;

	while(T--){
		cin>>N;
		for(int i=0;i<N;i++)
			cin>>A[i];

		int *st = build_tree(A,N);

	}
}


int* build_tree(int A[], int N){
	int n = (int)ceil(log2(N));
	int range = 2*(int)(pow(2,n))-1;

	int *B = new int[range];

	build_tree_rec(A,0,N-1, B,0);
	show(range, B);
	return B;
}

int build_tree_rec(int A[], int l, int r, int *B, int curr){
	if(l==r){
		B[curr]=A[l];
		return A[l];
	}

	int mid = (l+r)>>1;
	B[curr] = build_tree_rec(A,l,mid, B, 2*curr+1) + 
			build_tree_rec(A,mid+1,r, B, 2*curr+2);

	return B[curr];
}

