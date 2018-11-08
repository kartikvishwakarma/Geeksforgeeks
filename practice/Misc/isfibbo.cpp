#include <iostream>
#include <cmath>

using namespace std;


bool isSquare(unsigned long long x){
    unsigned long long  k = sqrt(x);
    return ((k*k)==x);
}

string solve(long n) {
    bool ans = (isSquare(5*n*n+4) || isSquare(5*n*n-4));
    if(ans)
        return "IsFibo";
    return "IsNotFibo";

}

int main(){
	int t;
	long n;
	cin>>t;

	while(t--){
		cin>>n;

		cout<<solve(n)<<"\n";
	}
}