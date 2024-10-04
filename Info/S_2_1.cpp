#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> dp(N, 1);

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if ((A[i] & A[j]) * 2 < (A[i] | A[j])) {
                dp[j] = max(dp[j], dp[i] + 1);
            }
        }
    }

    int result = *max_element(dp.begin(), dp.end());
    cout << result << '\n';
}