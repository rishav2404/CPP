#include <bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
int main()
{
    printBinary(9);
    int a = 7;
    int i = 3;
    if ((a & (1 << i)) != 0)
    {
        cout << "bit set"<<endl;
    }
    else
    {
        cout << "bit not set"<<endl;
    }


    // set ith bit
    printBinary( a | (1 << i) );

    //unset ith bit
    printBinary( a & ~(1 << i) );

    //toggle ith bit
    printBinary( a ^ (1 << i) );

    //count set bits
    int count = 0;
    for(int i = 0; i < 32; i++)
    {
        if((a & (1 << i)) != 0)
        {
            count++;
        }
    }

    //inbuilt set bit count
    cout << __builtin_popcount(a) << endl;
    

    //inbuilt set bit count for long long
    cout << __builtin_popcountll(a) << endl;
}