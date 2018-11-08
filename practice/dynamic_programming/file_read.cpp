#include <iostream>
#include <sstream>
using namespace std;

int main(){
	int t,n,t_id;

	cin>>t;

	while(t--){
		cin>>n;
		cout<<n<<"\n";
		for(int i=0;i<n;i++){
			string str;
			getline(cin,str);
			istringstream iss(str);
			while(iss>>t_id)
				//cout<<t_id<<" ";
			cout<<"\n";
		}
		
			
	}
}