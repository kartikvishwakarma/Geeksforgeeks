#include <iostream>
using namespace std;


int main(){
	int T,N;

	while(T--){
		cin>>N;
		int a[N];
		for(int i=0;i<N;i++)
			cin>>a[i];
		int sum_l=a[0];
		int sum_r=a[N-1];
		for(int i=0,j=N-1; j>=0 && i<N ; i++,j--){

			if(sum_l<sum_r){
				while(sum_l<sum_r && i<=j){
					sum_l+=a[i];
					i++;
				}
			}

			if(sum_l>sum_r){
				while(sum_l>sum_r && i<=j){
					sum_r+=a[j];
					j--;
				}
			}
			
			if(sum_l==sum_r){
				cout<<a[i]<<" "<<a[j]<<"\n";
				break;
			}
			
		}
	}
}