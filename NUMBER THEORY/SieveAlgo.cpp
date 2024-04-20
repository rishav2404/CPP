#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N,1);

int main() {

    // algo --> starts
    isPrime[0] = isPrime[1] = false;
    for(int i = 2 ; i < N ;++i){
        if(isPrime[i] == true){
            for(int j = 2 * i ;j < N ; j= j+i){
                isPrime[j]  = false;
            }
        }
    }

    // algo --> ends

    

    // for(int i =0; i < 20 ; ++i){
    //     cout<< isPrime[i] << endl;
    // }
    
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        if(isPrime[num]) cout<<"Prime\n";
        else cout<<"Not Prime\n";
    }

}