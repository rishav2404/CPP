#include <bits/stdc++.h>
using namespace std;


// sum of array
// sum(n,arr) -> summ of array elements upto n index
// sum(n,arr) = arr[n-1] + sum(n-1, arr)

int sum(int n, int a[]){
    if(n < 0) return 0;
    return a[n] + sum(n-1, a);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k = sum(n-1 , arr);
    cout<<k<<endl;
}
