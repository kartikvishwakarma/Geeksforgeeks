#include <iostream>
#define n 4
#define m 5

using namespace std;


int solve(int a[n][m], int r, int c){
	if(r>=n || c>=m || c<0)
		return 0;
	
	return a[r][c]+max(solve(a,r+1,c), 
			max(solve(a,r,c-1), solve(a,r,c+1)));
}

int main(){
	int t;
	int a[4][5] = { {1,2,3,-1,2},
					{-5,-8,-1,2,-150},
					{1,2,3,-250, 100},
					{1,1,1,1,20}  };
	int ans = solve(a,0,0);

	cout<<ans<<"\n";
}
