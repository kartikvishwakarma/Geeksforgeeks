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
	int ans=0;
	while(i<n){
		if(text[i]==patt[j]){
			i++, j++;
		}

		if(j==m){
			ans++;
			//cout<<" found at position: "<<(i-j+1)<<"\n";
			j=lps[j-1];
		}
		
		else if(text[i] != patt[j])
			if(j)
				j=lps[j-1];
			else
				i++;

	}
	if(ans)
		cout<<ans<<"\n";
	else
		cout<<"-1\n";
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
	string patt="gfg";//= "ABABCABAB";
	
	int t;
	cin>>t;
	while(t--){
	//cin>>text;
	cin>>text;
	int lps[patt.length()];
	kmp_match(text, patt,lps);
 	}
}
/*
#include <iostream>

using namespace std;

int main(){
	string str;
	int t;

	cin>>t;

	while(t--){
		cin>>str;
		int count=0;
		for(int i=0; i<str.length()-3; i++){
			if(str.at(i)=='g' && str.at(i+1)=='f' && str.at(i+2)=='g')
				count++;
		}
		if(count)
			cout<<count<<"\n";
		else
			cout<<"-1\n";
	}
}
*/