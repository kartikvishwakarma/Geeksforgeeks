#include <iostream>
#include <algorithm>

using namespace std;

int edit_dist(string str1, string str2){
	int m = str1.length();
	int n = str2.length();

	int dist[m+1][n+1];

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0)
				dist[i][j]=j;
			else if(j==0)
				dist[i][j]=i;
			else if(str1[i-1] == str2[j-1])
				dist[i][j] = dist[i-1][j-1];
			else
				dist[i][j] = 1+min(dist[i-1][j-1], min(dist[i-1][j], dist[i][j-1]));

		}
	}
	return dist[m][n];
}

int main(){
	string str1, str2;

	str1 = "cart";
	str2 = "march";

	int ans = edit_dist(str1, str2);
	cout<<ans<<"\n";
}