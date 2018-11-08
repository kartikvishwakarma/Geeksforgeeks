#include <iostream>
#include <iterator>
#include <climits>
#include <list>

using namespace std;

list<int> elem;

void show();

/*
int no_of_coins(int coins[], int V, int n){
	if(V==0){
		show();
		return 0;
	}

	int res = INT_MAX;
	int ans;

	for(int i=0;i<n;i++){
		if(V>=coins[i]){	
			ans = no_of_coins(coins, V-coins[i], n);
			if(ans!= INT_MAX && 1+ans < res)
				res = 1+ans;
		}
	}
	return res;
}
*/

void disp(int a[], int n){
	for(int i=0;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
}

int no_of_coins(int coins[], int V, int n){
	int len[V+1];

	len[0]=0;

	for(int i=1;i<=V;i++)
		len[i]=INT_MAX;

	//disp(len,V);

	for(int i=1;i<=V;i++){
		for(int j=0;j<n;j++){
			if(i>=coins[j]){
				int ans = len[i-coins[j]];
				if(ans!= INT_MAX && ans+1 < len[i])
					len[i]=ans+1;
			}
		}
	}
	return len[V];
}

void show(){
	list<int>::iterator it;
	for(it=elem.begin(); it!= elem.end(); it++)
		cout<<*it<<" ";
	cout<<"\n";
}
int main(){
	int coins[] = {1,2,3};
	int V = 4;
	int n = sizeof(coins)/sizeof(coins[0]);

	int ans = no_of_coins(coins,V,n);
	cout<<ans<<"\n";
	//show();
	elem.clear();
}