#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t,n;
	string k;
	cin>>t;

	while(t--){
		cin>>n>>k;
		string a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		bool solve=false;
		for(int i=0;i<n;i++){
			//cout<<a[i]<<" "<<k<<"\n";
			int p = a[i].size();
			if((k.size()>=p &&  a[i]<k) || (k.size()>p)){
				
				int diff=0;
				if(p==1){
					solve=true;
					cout<<a[i]<<" ";
				}
				else{
					bool flag = false;
					for(int j=1;j<p;j++){
						int diff = a[i][j-1]-a[i][j];
						//cout<<diff<<" ";
						if(abs(diff) != 1)
							flag=true;
					}

					if(!flag){
						solve=true;
						cout<<a[i]<<" ";
					}
				}		
				
			}
					
		}
		if(!solve)
			cout<<"-1";
		cout<<"\n";
	}
}