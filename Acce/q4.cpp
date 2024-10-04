#include <bits/stdc++.h>
using namespace std;

int findCount(int arr[], int length, int num, int diff) {
    int count = 0;
    for(int i =0; i < length; i++){
        if(abs(num - arr[i]) <= diff) count++;
    }

    return (count > 0) ? count : -1;
}


int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i =0; i < n ;i++) {
        cin >> arr[i];
    }

    int num ,diff;
    cin >> num >> diff;

    cout << findCount( arr , n, num , diff ) << endl;
}