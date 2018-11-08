#include <bits/stdc++.h>
using namespace std;
 
typedef struct Palin{
	bool parent;
	bool odd;
	bool even;
}P;
/*
P isPalindrom(int a[], int n){
	P p;
	p.parent=true;
	p.odd=true;
	p.even=true;

	int j;
	//for(int i=0,j=n-1; i<=j; i++,j--){
	for(int i=0;i<=n/2;i++){
		j = n-i-1;
		cout<<"( "<<i<<", "<<j<<") ";
		cout<<"( "<<a[i]<<", "<<a[j]<<") \n";
		if(a[i]!=a[j])
			p.parent = false;

		if(i%2 && j%2 && a[i] != a[j])
			p.even = false;

		if(i%2==0 && j%2==0 && a[i] != a[j])
			p.odd = false;
	}
	return p;
}
*/

bool isParent(int a[], int n){
	int j;

	for(int i=0;i<=n/2;i++){
		j = n-i-1;
		if(a[i] != a[j])
			return false;
	}
	return true;
}

bool isOdd(int a[], int n){
	int j;
	for(int i=0;i<=n/2;i+=2){
		j = n-i-1;
		if(a[i] != a[j])
			return false;
	}
	return true;	
}

bool isEven(int a[], int n){
	int j;
	for(int i=1;i<=n/2;i+=2){
		j = n-i;
		if(a[i] != a[j])
			return false;
	}
	return true;
}


int main()
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    int t,n,n_even, n_odd;
    string str;

    cin>>t;

    while(t--){
    	cin>>str;
		int n = str.length();
    	int a[n];
    	for(int i=0;i<n;i++)
    		a[i]=str.at(i)-'a'+1;
    	/*
    	P p = isPalindrom(a,n);
    	//cout<<p.parent<<" "<<p.odd<<" "<<p.even<<"\n";
    	if(p.parent)
    		cout<<"PARENT\n";
    	else if(p.odd && p.even)
    		cout<<"TWIN\n";
    	else if(p.odd)
    		cout<<"ODD\n";
    	else if(p.even)
    		cout<<"EVEN\n";
    	else 
    		cout<<"ALIEN\n";
    		*/
    	if (n%2){
    		n_even=n-1;
    		n_odd=n;
    	}
    	else {
    		n_odd = n-1;
    		n_even = n;
    	}
    	
    	bool p = isParent(a,n);
    	bool e = isEven(a,n_even);
    	bool o = isOdd(a,n_odd);

    	if(p)
    		cout<<"PARENT\n";
    	else if(o && e)
    		cout<<"TWIN\n";
    	else if(o)
    		cout<<"ODD\n";
    	else if(e)
    		cout<<"EVEN\n";
    	else 
    		cout<<"ALIEN\n";
    	

    }
}