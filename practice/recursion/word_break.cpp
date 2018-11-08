#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

int k;
map<int, string> all_sent;
map<string, bool> visited;
string str;

void word_break(vector<string> dict, string word, int n, string sent){
	//cout<<l<<" "<<n<<"\n";
		
	for(int i=1;i<=n;i++){
		str=word.substr(0,i);
		if(find(dict.begin(), dict.end(), str) != dict.end() ){	
			if(i==n){
				sent+=str;
				cout<<sent<<"\n";
				return;
			}
			
			word_break(dict,word.substr(i,n-i),n-i,sent+str+" ");
			
		}
	}
}



int main(){
	int t,n,N;
	string word;
	
	cin>>t;

	while(t--){
		cin>>n;
		vector<string> dict(n);	

		for(int i =0;i<n;i++){
			cin>>word;
			dict.push_back(word);
		}

		cin>>word;
		string sent="";
		N = word.length();
		word_break(dict, word,N, sent);

	}
}