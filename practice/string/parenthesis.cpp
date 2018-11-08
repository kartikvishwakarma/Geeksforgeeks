#include <iostream>
#include <stack>


using namespace std;

char oppo(char p){
	if(p=='}')
		return '{';
	if(p==')')
		return '(';
	if(p==']')
		return '[';

	if(p=='{')
		return '}';
	if(p=='(')
		return ')';
	if(p=='[')
		return ']';
	
}

int main(){
	int n,t;
	string str;
	cin>>t;
	while(t--){
		stack<char> S;
		cin>>str;
		//cout<<str<<"\n";
		int n = str.length();

		for(int i=0;i<n;i++){
			//cout<<str.at(i)<<" ";
			if(S.empty()){
				//cout<<"if\n";
				S.push(str.at(i));
			}
			else if(S.top() == oppo(str.at(i))){
				//	cout<<i<<"::"<<S.top()<<" "<<(str.at(i))<<"\n";
				S.pop();
			}
			else{
				//cout<<"else\n";
				S.push(str.at(i));
			}
		}
		/*
		while(!S.empty()){
			cout<<S.top();
			S.pop();
		}		
	`	*/
		if(S.empty())
			cout<<"balanced\n";
		else 
			cout<<"not balanced\n";

	}
}