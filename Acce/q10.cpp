#include <bits/stdc++.h>
using namespace std;

int NumberOfCarries(int num1 , int num2) {
    int count = 0, carry =0, sum =0;

    while(num1!=0 || num2!=0) {
        int a  = num1 % 10;
        int b  = num2 % 10;

        sum = a + b + carry;
        if(sum > 9){
            carry = 1;
            count++;
        } else {
            carry = 0;
        }

        num1 = num1/10;
        num2 = num2/10;
    }

    return count;
}

int main () {
    int num1, num2;

    cin >> num1;
    cin >> num2;
    
    cout << NumberOfCarries(num1, num2) << endl; 
}