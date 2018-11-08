#include <stdio.h>
int lis(int a[], int n){
	int len[n];
	for(int i=0; i<n;i++)
		len[i]=1;

	for(int i=1; i<n;i++){
		for(int j=0; j<i; j++){
			if(a[i]>a[j] && len[j]+1 > len[i])
				len[i]=len[j]+1;
		}
	}
	int ans = len[0];
	for(int i=1; i<n;i++){
        if(len[i]>ans)
            ans = len[i];
	}
	return ans;
}
int main() {
	int t,n;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d", &n);
	    int a[n];
	    for(int i=0; i<n;i++)
	        scanf("%d", &a[i]);
        
        int ans = lis(a,n);
        printf("%d\n",ans);
	}
	return 0;
}