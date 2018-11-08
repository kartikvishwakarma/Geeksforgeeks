#include <iostream>
#include <cmath>
using namespace std;
 
/* function to check if power of 8 */
bool checkPowerof8(long long n)
{
    /* calculate log8(n) */
    double i = log(n) / log(8);
 	//cout<<i<<" | ";
    /* check if i is an integer or not */
    return (i - trunc(i) < 0.00001);
}
 
/* driver function */
int main()
{
    long long int n,t;
    cin>>t;
    while(t--){
    	cin>>n;
    	checkPowerof8(n) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}