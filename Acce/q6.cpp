#include <bits/stdc++.h>
using namespace std;

int LargeSmallSum(int a[],int len) {
    if(len <= 3) return 0;

    vector<int> even;
    vector<int> odd;

    for(int i =0 ; i < len; i++) {
        if(i&1) odd.push_back(a[i]);
        else even.push_back(a[i]);
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    return odd[1]+even[even.size()-2];

}


int main() {
    int n;
    cin >>n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << LargeSmallSum(a, n)<< endl;
    
}