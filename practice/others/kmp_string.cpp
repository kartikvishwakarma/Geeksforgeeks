#include <iostream>

using namespace std;

void show(int a[], int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
}

void string_match(string text, string patt, int lps[]){
	int i=0,j=0;
	int n = text.length();
	int m = patt.length();
	//show(lps,m);
	while(i<n){
		if(text[i]==patt[j]){
			i++, j++;
		}

		if(j==m){
			cout<<" found at position: "<<(i-j+1)<<"\n";
			j=lps[j-1];
		}
		
		else if(text[i] != patt[j])
			if(j)
				j=lps[j-1];
			else
				i++;

	}
}

void kmp_match(string text, string patt, int lps[]){
	// preprocessing lps;
	int n = patt.length();
	
	lps[0]=0;
	int i=1, j=0;
	while(i<n){
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
				j=lps[j-1];
			
		}
	}
	string_match(text,patt, lps);
	//show(lps,n);
}

int main(){
	string text ;//= "ABABCABABDABABCABAB";
	string patt ;//= "ABABCABAB";
	getline(cin, text);
	//cin>>text;
	cin>>patt;
	int lps[patt.length()];
	kmp_match(text, patt,lps);
}