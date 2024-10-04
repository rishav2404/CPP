#include <bits/stdc++.h>
using namespace std;

const int MOD = 10000;

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

    // Base case: Arrays of length 1
    for (int j = 1; j <= n; ++j) {
        dp[1][j] = 1;
    }

    // Fill the DP table
    for (int i = 2; i <= k; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int m = 1; m <= n; ++m) {
                if (j % m == 0) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][m]) % MOD;
                }
            }
        }
    }

    // Sum up all valid arrays of length k
    int result = 0;
    for (int j = 1; j <= n; ++j) {
        result = (result + dp[k][j]) % MOD;
    }

    cout << result << endl;
}