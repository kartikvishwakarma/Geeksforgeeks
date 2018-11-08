#include <iostream>
#include <climits>

using namespace std;

int LCIS(int arr1[], int n, int arr2[], int m){
	int table[m];
	for(int i=0;i<m;i++)
		table[i]=0;
	int len=0;

	for(int i=0;i<n;i++){
		len=0;
		for(int j=0;j<m;j++){
			if(arr1[i] == arr2[j]){
				if(len+1>table[j])
					table[j]=1+len;
			}

			if(arr1[i]>arr2[j]){
				if(table[j]>len)
					len=table[j];
			}
		}
	}

	int res = INT_MIN;
	for(int i=0;i<m;i++)
		res = max(res, table[i]);

	return res;
}

int main(){

    int arr1[] = {3, 4, 9, 1};
    int arr2[] = {5, 3, 8, 9, 10, 2, 1};
 
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
 
    cout << "\nLength of LCIS is "
         << LCIS(arr1, n, arr2, m)<<endl;
    return (0);
}