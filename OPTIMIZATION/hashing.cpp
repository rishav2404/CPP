#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
int hsh[N];

int main() {
    // take array input on n size
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
        hsh[a[i]]++;
    }

    // while loop of q query
    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        cout << hsh[x] << endl;
    }

    // Time complexity: O(n) + O(q) = O(n+q) = O(n) = 10^5
    // Space complexity: O(N) = 10^7

}