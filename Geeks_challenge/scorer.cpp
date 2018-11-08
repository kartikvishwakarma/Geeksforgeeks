#include <iostream>

using namespace std;

int main(){
	int t,n1,n2,tmp;
	cin>>t;
	while(t--){
		cin>>n1>>n2;
		int sum1=0, sum2=0;

		for(int i=0; i<n1; i++){
			cin>>tmp;
			sum1+=tmp;
		}

		for(int i=0; i<n2; i++){
			cin>>tmp;
			sum2+=tmp;
		}
	cout<<((sum1>sum2)?"C1\n":"C2\n");
	}
} 