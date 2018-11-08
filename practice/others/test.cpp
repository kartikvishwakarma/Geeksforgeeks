#include <iostream>

using namespace std; 

void show(int a[], int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
}

void compute(string patt, int lps[], int m){
	lps[0]=0;
	int i=1,j=0;

	while(i<m){
		if(patt[i]==patt[j]){
			j++;
			lps[i]=j;
			i++; 
		}
		else{
			if(j==0){
				lps[i]=0;
				i++;
			}
			else 
				j = lps[j-1];
		}
	}
}

void kmp_match(string text, string patt, int lps[]){
	int n = text.length();
	int m = patt.length();

	compute(patt,lps,m);
	//show(lps,m);
	int i=0,j=0;

	while(i<n){
		if(text[i]==patt[j]){
			i++; j++;
		}

		if(j==m){
			cout<<"found at : "<<i-j<<"\n";
			j = lps[j];
		}

		else if(text[i]!=patt[j]){
			if(j==0)
				i++;
			else
				j = lps[j-1];
		}
	}
}

int main(){
	string text = "ABABCABABDABABCABAB";
	string patt = "ABABCABAB";
	int lps[patt.length()];
	kmp_match(text, patt,lps);
}