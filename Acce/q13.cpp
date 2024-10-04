#include <bits/stdc++.h>
#include <climits>
using namespace std;

int maxExponents(int a, int b);

int main() {
    int a, b;
    cin >> a >> b;
    cout << maxExponents(a, b) << endl;
    return 0;
}

int maxExponents(int a, int b) {
    int maxCount = INT_MIN;
    int ans = 0;
    for (int i = a; i <= b; i++) {
        int count = 0;
        int num = i;
        while (num > 1 && num % 2 == 0) {
            num = num / 2;
            count++;
        }
        if(count > maxCount) {
            maxCount = max(maxCount, count);
            ans = i;
        }
    }
    return ans;
}