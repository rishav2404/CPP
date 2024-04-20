/*
Our Friend Monk has finally found the Temple of Programming secrets. However, the door of the temple is firmly locked. Now, as per the rules of the temple, Monk needs to enter a Secret Password in a special language to unlock the door. This language, unlike English consists of K alphabets. The properties of this secret password are:

It has a length of N characters.

It is composed only of the K characters belonging to the Special language.

Each character belonging to the special language has been used at max once in the secret code.

Now, Monk has no idea about what the ideal password may be and needs you help. You need to help Monk find the total number of distinct candidate Strings for it Modulo 

*/



#include <stdio.h>
#include <iostream>
using namespace std;

int N = 1e5 +10;
int M = 1e9 + 7;


int binExp(int a,int b, int m){
      int res =1;
      while(b){
            if(b & 1) res= (a * 1LL * res) % m;
            a = (a * 1LL * a) % m;
            b >>= 1;
      	}
    return res;
}

int main(){
	int fact[N];
	fact[0] = 1;
    for(int i = 1 ; i < N ; i++){
        fact[i] = ( fact[i-1] * 1LL* i ) % M; 
    }
	
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;

		int ans = fact[n];
		ans = (ans * 1LL * fact[k]) % M;

		int den = (fact[k-n] * 1LL * fact[n]) % M;
		ans = (ans *1LL* binExp(den, M-2, M)) % M ;
		cout<< ans << endl;
	}
}
