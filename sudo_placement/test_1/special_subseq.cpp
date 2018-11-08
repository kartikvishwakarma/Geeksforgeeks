#include<bits/stdc++.h>
using namespace std;
 

void subseq(string str, int n, vector<string> &V)
{
    unsigned int opsize = pow(2, n);
    for (int counter = 1; counter < opsize; counter++)
    {
    	string k="";
        for (int j = 0; j < n; j++)
        {
            if (counter & (1<<j))
                k+=str[j];
       	}
    
    	V.push_back(k);
    }
}


void show(vector<string> P){
	int n = P.size();
	cout<<n<<"\n";

	for(int p=0;p<n; p++)
		cout<<P[p]<<" ";
	cout<<"\n";
}

void all_seq(string str, int p, int n, vector<string>&All){
	string z="";
	for(int i=p;i<n;i++){
		if(islower(str[i])){
			z=str;
			z[i]=(char)(str.at(i)-32);
			All.push_back(z);
		}
		all_seq(z,i+1,n,All);
	}
}


int main(){
	int t,n;
	string str;

	cin>>t;

	while(t--){
		cin>>str;
		n = str.length();

		vector<string> V,All;
		subseq(str, n,V);

		All = V;

		for(int i=0;i<V.size(); i++)
    		all_seq(V[i],0,V[i].size(), All);
    	//cout<<V[i]<<" ";
    	//cout<<"\n";
    	sort(All.begin(), All.end());
    	show(All);		

	}
}