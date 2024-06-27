#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int solve(int N) {
    long long result = 1;
    for(int i = 0; i < N; i++) {
        result = (result * 2) % MOD;
    }
    return (result - 1 + MOD) % MOD;
}

int main() {
    int N ;
    cin>>N;
    cout << solve(N) << endl;  // Output: 6
    return 0;
}