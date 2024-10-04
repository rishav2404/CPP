#include <bits/stdc++.h>
using namespace std;

int calculate(int m, int n);

int main () {
    int n,m;
    cin >> m >> n;
    cout << calculate(m,n) << endl;
}

int calculate(int m, int n) {
    int sum;
    for(int i = m; i<= n;i++) {
        if( i%3==0 && i%5==0 ) sum += i;
    }
    return sum;
}