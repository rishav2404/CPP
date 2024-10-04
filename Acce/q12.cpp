#include <bits/stdc++.h>
using namespace std;

int operationChoices(int c, int a , int b ) {
    if( c == 1 ) return a+b;
    else if( c == 2 ) return a-b;
    else if( c == 3 ) return a*b;
    else if( c == 4 ) return a/b;
    
    return 0;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << operationChoices(c, a, b) << endl;
}