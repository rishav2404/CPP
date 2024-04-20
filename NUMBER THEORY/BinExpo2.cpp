#include <bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
// b <= 10^18
int binExp(int a,long long int b, int m){
      int ans =1;
      while(b > 0){
            if(b & 1) ans = (ans*a*1LL) % m;
            a = (a*a) % m;
            b>>=1;
      }
      return ans;
}

int binExpRec(int a,int b){
      int ans =1;
      while(b){
            if(b%2) ans*=a;
            a*= a;
            b>>=1; // b = b/2
      }
      return ans;
}

int main() {
    // (50 ^ (64 ^32))  % M    ------> to calculate
    // 50 ^ (64 ^32) % M = 50 ^ (64 ^32 % (M-1)) % M   -------> using ETF
      int a,b;
      cin>>a>>b;
      cout<<binExp(50 , binExp(64,32,M-1),M);
      return 0;
}