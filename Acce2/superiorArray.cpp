#include <bits/stdc++.h>
using namespace std;

int findNumberOfSuperiorElements(int* a, int n) {
    int count = 0 ;
    int maxm = INT_MIN;
    for(int i= n-1 ; i >= 0; i--) {
        if(a[i] > maxm){
            count++;
            maxm = max(maxm, a[i]);
        }
    }

    return count;
}

int main () {
    int n;
    cin >> n;
    int arr[n];

    for(int i =0;i < n; i++) {
        cin >> arr[i];
    }

    int k = findNumberOfSuperiorElements( arr, n);
    cout << k << endl;
}
