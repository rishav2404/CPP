#include<bits/stdcc.h>
using namespace std;
/*
There are n children and k toffees (k < n).
Count the no. of ways  to distribute toffee among N students such that
each student get only one toffee

------>nCk , % M , M = 10^9 +7 ---> prime
N < 10^6, K < N < 10^6
Q < 10^5
n! / ((n-r)! * r!)
*/
const int N = 1e6 +10;
int fact[N];

int main(){
    fact[0] = 1;
    for(int i = 1 ; i < N ; i++){
        fact[i] = ( fact[i-1]*i*1LL ) % M; 
    }

    int q;
    cin>>q;
    while(q--){
        int n,k;
        cin>>n>k;
        int ans = fact[n];
        int den = (fact[n-r] * 1LL * fact[r]) % M;
        ans = ans  * binexp(den, M-2 , M);
        cout<< and <<endl; 
    }
}