#include <iostream>
#include <cstring>
#define n 6
#define m 5

using namespace std;

int show(int len[n][m], int a[n][m]){
	int max=0;
	int x,y;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(len[i][j]>max){
				max=len[i][j];
				x=i; y=j;
			}
		}
	}

	for(int i=x;i>x-max;i--){
		for(int j=y;j>y-max;j--){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return max;
}

int solve(int a[n][m]){
	int len[n][m];
	memset(len, 0, sizeof(len));

//copying first row and column
	for(int i=0;i<n;i++)
		len[i][0]=a[i][0]; 
	for(int i=0;i<m;i++)
		len[0][i]=a[0][i];

	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(a[i][j])
				len[i][j]=1+min(len[i-1][j-1], min(len[i-1][j],len[i][j-1]));
			else
				a[i][j]=0;
		}
	} 
	return show(len,a);

}

int main(){
	int a[n][m] = {{0,1,1,0,1},
				   {1,1,1,1,0},
				   {1,1,1,1,0},
				   {1,1,1,1,0},
				   {1,1,1,1,1},
				   {0,0,0,0,0} };
   int ans = solve(a);

   cout<<ans<<"\n";

} 

