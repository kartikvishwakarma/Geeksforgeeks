#include <iostream>
#include <climits>

using namespace std;
/*
int final_dest(int a[], int p, int n, int l, int f){
	//cout<<l<<" "<<f<<"\n";
	if(l==f)
		return 0;
	//cout<<INT_MAX<<"\n";
	int min = INT_MAX;
	int res;
	if((l+a[p])%1000<f){
		for(int i=p;i<n;i++){	
				res = final_dest(a,0,n,(l+a[i])%1000, f);
				if(res != INT_MAX && res+1 < min)
					min = 1+res;
		}
	}

	else {
		for(int i=p;i<n;i++){	
				res = final_dest(a,i+1,n,l, f);
				if(res != INT_MAX && res+1 < min)
					min = 1+res;
		}	
	}
	return min;
}
*/
int final_dest(int a[], int p, int n, int l, int f){
	int tab[1001];
	tab[f]=0;

	for(int i=0;i<=1000 && i!=f; i++)
		tab[i]=INT_MAX;
	int i,j;
	i=l; j=0;
	for(;i<=1000; i++){
		if((i+a[j])%1000 <f){
			for(int j=0;j<n;j++){
				int res = tab[(i+a[j])%1000];
				if(res != INT_MAX && res+1<tab[i])
					tab[i]=1+res;
			}
		}
		else{/*
			for(int j=i;j<n;j++){
				int res = tab[(i+a[j])%1000];
				if(res != INT_MAX && res+1<tab[i])
					tab[i]=1+res;
			}*/
		j++;
		}
	}
	return tab[1000];
}	


int main(){
	int t,n,l,f;

	cin>>t;

	while(t--){
		cin>>l>>f;
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		int ans = final_dest(a,0,n,l,f);
		if(ans == INT_MAX)
			cout<<"-1\n";
		else
			cout<<ans<<"\n";
	}
}