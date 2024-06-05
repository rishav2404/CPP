/*


Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
int a[N];
int pfSum[N];

int main() {
    // take array input on n size
    int n;
    cin >> n;
    int a[n];
    for(int i=1; i<=n; i++) {
        cin >> a[i];
        pfSum[i] = pfSum[i-1] + a[i];
    }


    /*
    a :-                   l               r
    ----------------------------------------------------
    |   2   |    6    |    3   |   5   |   1   |   4   |
    ----------------------------------------------------

    pre- computed prefix Sum array
    pfSum :-    l-1                        r
    ----------------------------------------------------
    |   2   |   8    |    11   |   16  |  17   |   21   |
    ----------------------------------------------------
    
    */

   // while loop of q query
    int q;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        long long sum = pfSum[r] - pfSum[l-1];
        cout << sum << endl;
    }

    // Time complexity: O(n) + O(q) = O(n+q) = O(n) = 10^5
    // Space complexity: O(N) = 10^7

}