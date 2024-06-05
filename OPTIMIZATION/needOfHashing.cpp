/*
Given array a of N integers. Given Q queries
and in each query given a number X, print
count of that number in array.

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // take array input on n size
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    // while loop of q query
    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        int count = 0;
        for(int i=0; i<n; i++) {
            if(a[i] == x) {
                count++;
            }
        }
        cout << count << endl;
    }

    // Time complexity: O(n) + O(n*q) = O(n*q) = O(n^2) = 10^10

}