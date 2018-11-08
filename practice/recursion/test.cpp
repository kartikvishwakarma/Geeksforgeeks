#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

int k;
string tmp;
map<int, string> all_sent;
map<string, bool> visited;

void word_break(vector<string> dict, string word, int n, string str){
	//cout<<l<<" "<<n<<"\n";

	for(int i=1;i<=n;i++){

		string sent = word.substr(0,i);
		if(find(dict.begin(), dict.end(), sent) != dict.end()){	
			if(i==n){
				str += sent;
				cout<<"("<<str<<")";
				return;
			}
			word_break(dict, word.substr(i,n-i), n-i, str+sent+" ");
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
			visited[word]=false;
		}

		cin>>word;
		string sent="";
		N = word.length();

		word_break(dict, word, N, sent);
		cout<<"\n";
		all_sent.clear();
		visited.clear();
	}
}