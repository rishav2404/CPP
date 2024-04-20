#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N,1);
vector<int> highestPrime(N,0), lowestPrime(N,0);

int main() {

    // algo --> starts
    isPrime[0] = isPrime[1] = false;
    for(int i = 2 ; i < N ;++i){
        if(isPrime[i] == true){
            lowestPrime[i] = highestPrime[i] = i;
            for(int j = 2 * i ;j < N ; j= j+i){
                isPrime[j]  = false;
                highestPrime[j] = i;   // highest prime
                if(lowestPrime[j] == 0) lowestPrime[j] = i;  // lowest prime
            }
        }
    }

    for(int i =0; i < 20 ; ++i){
        cout<< highestPrime[i] << " " << lowestPrime[i] << endl;
    }

}