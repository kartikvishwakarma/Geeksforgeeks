#include <bits/stdc++.h>

using namespace std;

map <int, string> digit;


void phone_number(int D[], int n, int p, string &str){

	if(str.length()==n){
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		cout<<str<<" ";
		//str.empty();
		return;
	}

	for(int i=p;i<n;i++){
		
		for(int j=0;j<digit[D[i]].length(); j++){
			str+=digit[D[i]][j];
			phone_number(D,n,i+1,str);
			str.pop_back();
			//str.empty();
		}

	}

}

int main(){
	digit[2]="ABC";
	digit[3]="DEF";
	digit[4]="GHI";
	digit[5]="JKL";
	digit[6]="MNO";
	digit[7]="PQRS";
	digit[8]="TUV";
	digit[9]="WXYZ"; 
	int n,t;
	cin>>t;

	while(t--){
		cin>>n;
		int D[n];

		for(int i=0;i<n;i++)
			cin>>D[i];
		string str="" ;
		phone_number(D,n,0,str);
		cout<<"\n";
	}
}