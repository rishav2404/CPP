#include <bits/stdc++.h>
using namespace std;


int innversionPair (int* a, int n) {
    int count = 0;

    for(int  i = 0; i < n-1 ; i++) {
        for(int  j = i+1; j < n ; j++) {
            if(a[i] > a[j]) count++;
        }
    }
    return count;
}

int main () {
    int n;
    cin >> n;
    int arr[n];

    for(int i =0 ;i < n ; i++) {
        cin >> arr[i];
    }

    int k = innversionPair (arr, n);
    cout << k << endl;
}