#include <bits/stdc++.h>
using namespace std;

// digit sum of a number e.g 1234
// digitSum(1234)  --> digitSum(123) + [ (4)lastDigit --> 1234 % 10 ]

int digitSum(int n){
    if(n ==0) return 0;
    return digitSum(n/10)+(n%10);
}

int main(){
    int n;
    cin>>n;
    cout<<digitSum(n)<<endl;
}
