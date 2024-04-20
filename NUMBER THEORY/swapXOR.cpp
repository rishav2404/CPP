// SWAP two numbers using XOR   

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a =4,b=6;
    cout<<a<<" "<<b<<endl;
    a = a^b;
    b = b^a;    // b --> a
    // b = b^a^b= b^b^a = 0^a = a

    a = a^b;  // a --> b
    // a = (a^b)^a = a^a^b = 0^b = b

    cout<<a<<" "<<b<<endl;

    return 0;
}