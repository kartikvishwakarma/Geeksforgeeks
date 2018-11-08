#include <iostream>
#include <iterator>
#include <unordered_map>
using namespace std;


int main(){
	int T,N,val,sum;
	cin>>T;
	while(T--){
		cin>>N;
		sum=0;
		unordered_map<int,int> map;
		for(int i=1;i<=N;i++){
			cin>>val;
			//cin>>a[i];
			sum+=val;
			map[i]=sum;
			};
			//show()
			int left = map[1];
			int right = map[N];
			int p=2;
			while(left<right){
				left = map[p-1];
				right = map[N]-map[p];
			//	cout<<p<<" : "<<left<<" "<<right<<"\n";
				p++;
			}
			//show(map);
			map.clear();
			if(left==right)
				cout<<p-1<<"\n";
			else 
				cout<<"-1\n";
		}
	return 0;
}		
