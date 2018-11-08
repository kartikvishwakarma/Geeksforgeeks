#include <iostream>
//#include <unordered_map>
#include <algorithm>


using namespace std;

//unordered_map<int,int> bleak;
const int size= 10000;
int a[size];

int main(){
	int t,n;
	for(int i=1;i<=size;i++){
		a[i]=i+__builtin_popcount(i);
	}

	cin>>t;

	while(t--){
		cin>>n;

		if(find(a,a+size, n) != a+size)
			cout<<"0\n";
		else
			cout<<"1\n";
	}
}