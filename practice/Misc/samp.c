#include <stdio.h>

int min(int a, int b){
	return ((a>b)?b:a);
}

int solve(int n, int d, int c1, int c2){
	if(n<=1)
		return 0;
	if(n%d)
		return c1+solve(n-1, d,c1,c2);

	return min((n-n/d)*c1+solve(n/d, d,c1,c2),
	 c2+solve(n/d, d,c1,c2));
	
}

int main(){
	int n,d,c1,c2;

	scanf("%d %d %d %d\n", &n, &d, &c1, &c2);

	int ans = solve(n,d,c1,c2);
	printf("%d\n", ans);
}