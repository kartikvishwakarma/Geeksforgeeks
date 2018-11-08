#include <iostream>
#include <vector>
using namespace std;

//char v[] = {'a', 'e', 'i', 'o', 'u'};
vector<int> rep;


int main(){
	int n;
	string str;
	cin>>n;

	while(n--){
		cin>>str;
		for(int i=0; i<str.length(); i++){
			if(str[i]=='a' || str[i]=='u' || str[i]=='o' || str[i]=='i' || str[i]=='e')
				rep.push_back(i);
		}

		//show(rep);
		int N = rep.size();
		char tmp;
		for(int i=0;i<N/2;i++){
			tmp= str[rep[i]];
			str[rep[i]]=str[rep[N-i-1]];
			str[rep[N-i-1]]=tmp;
		}
		cout<<str<<"\n";
		rep.clear();
	}
} 