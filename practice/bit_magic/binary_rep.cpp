#include <cstdio>
#include <cmath>

unsigned bin(unsigned int n){
	return log2(n&-n)+1;
}

int main(){
	unsigned int t,n;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);
		unsigned pos = bin(n);
		printf("%d\n", pos);
	}
}