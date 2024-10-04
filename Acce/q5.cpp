#include <bits/stdc++.h>
using namespace std;

int differenceofSum(int n, int m) {
    int sumDiv =0;
    int sumNotDiv =0;
    for(int i=1;i <= m; i++) {
        if(i%n ==0 && i/n > 0) sumDiv += i;
        else sumNotDiv += i;
    }
        return sumNotDiv-sumDiv;
}


int main() {
    int n,m;
    cin >>n >> m;
    cout << differenceofSum(n,m) <<endl;
}