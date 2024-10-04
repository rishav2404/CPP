#include <bits/stdc++.h>
using namespace std;

int maxCakePiece(int n)
{
    // const int M = 1000000007;
    // long long pieces = ((n*(n+1))/2)+1;
    // return pieces % M;

    const unsigned int M = 1000000007;
    int sum = 1;
    while (n != 0)  sum += n--;
    return sum % M;
}

int main()
{
    int n;
    cin >> n;

    int k = maxCakePiece(n);
    cout << k << endl;
}