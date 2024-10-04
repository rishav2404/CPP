#include <bits/stdc++.h>
using namespace std;

int ProductSmallestPair(int sum, int arr[], int n) {
    if(n < 2) return -1;

    sort(arr, arr+n);
    int j = 0;
    for(int i=0; i < n; i++) {
        j =i+1;
        if(arr[i]+arr[j] > sum) continue;
        else if (arr[i]+arr[j] <= sum) {
            return arr[i]*arr[j];
        }
    }
    return 0;
}

int main(void) {
    int n;
    cin >>n;
    int sum;
    cin >> sum;

    int arr[n];

    for(int i=0; i< n; i++) {
        cin >> arr[i];
    }

    cout << ProductSmallestPair(sum, arr ,n) << endl ;
}