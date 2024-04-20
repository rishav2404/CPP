#include <bits/stdc++.h>
using namespace std;


int binExpRec(int a,int b){
      if(b==0) return 1;
      int res = binExpRec(a,b/2);
      if(b%2) return res*res*a;
      else return res*res;
}


// int binExp(int a,int b, int m){
//       int ans =1;
//       while(b){
//             if(b%2) ans= (a*ans*1LL)%m;
//             a = (a*a*1LL) % m;
//             b>>=1;
//       }
//       return ans;
// }

int main() {
      int a,b;
      cin>>a>>b;
      cout<<binExpRec(a,b);
      return 0;
}