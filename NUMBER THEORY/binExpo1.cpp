#include <bits/stdc++.h>
using namespace std;


const long long int M = 1e18+7;
// a <= 10^9 , M<=10^9

// a <= 10^18 2^1024
int binExpRec(int a,int b){
      int ans =1;
      while(b){
            if(b%2) ans*=a;
            a*= a;
            b>>=1;
      }
      return ans;
}

int main() {
      int a,b;
      cin>>a>>b;
      cout<<binExpRec(a,b);
      return 0;
}