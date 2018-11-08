#include <iostream>
#include <stack>
using namespace std;


int main(){
	int t,q,opr,ele;

	cin>>t;

	while(t--){
		cin>>q;
		stack<int> S;

		for(int i=0;i<q;i++){
			cin>>opr;

			if(opr==1){
				cin>>ele;
				S.push(ele);
			}
			else if(opr==2){
				if(S.size()>0)
					S.pop();
			}
			else if(opr==3)
				if(S.size()>0)
					cout<<S.top()<<"\n";
				else
					cout<<"-1\n";

		}
	}
}