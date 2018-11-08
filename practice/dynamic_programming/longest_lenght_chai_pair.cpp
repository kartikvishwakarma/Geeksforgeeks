#include <iostream>

using namespace std;

typedef struct Pair{
	int a;
	int b;
}P;

int lis(P p[], int n){
	int len[n+1] = {1};

	for(int i=1;i<n;i++){
		for(int j=0; j<i; j++){
			if(p[i].a < p[j].b && len[i] < 1+len[j])
				len[i]=1+len[j];
		}
	}
	int max = len[0];
	for(int i=1;i<=n;i++){
		if(len[i]>max)
			max=len[i];
	}
	return max;
}

int main(){
	P p [] = {{5,24}, {39,60}, {15,28}, {27,40}, {50,90}};
	int n = sizeof(p)/sizeof(p[0]);

	int ans = lis(p, n);
	cout<<ans<<"\n";
}