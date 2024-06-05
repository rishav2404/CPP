/*

Given 2d array a of N*N integers. Given Q
queries and in each query given a, b, c and d
print sum of square represented by (a, b) as
top left point and (c, d) as bottom right
point.

Constraints
1 <= N <= 10^3
1 <= a[i], a[j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N

*/


#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
int arr[N][N];
long long pfSum[N][N];

int main() {
    // take array input on n size
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for (int j = 1; j <= n; j++){
            cin >> arr[i][j];
            pfSum[i][j] = arr[i][j] + pfSum[i-1][j] + pfSum[i][j-1] - pfSum[i-1][j-1];
        }
    }

    int q;
    cin >> q;
    while(q--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        long long sum = pfSum[c][d] - pfSum[a-1][d] - pfSum[c][b-1] + pfSum[a-1][b-1];
        cout << sum << endl;
    }



}