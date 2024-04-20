// Sorting using inbuilt sorting of STL.
// It uses Intro sort algo which is a mix of # sorting algo(quick, heap, insertion)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }

    sort(a,a+n);  //  a->initial of array , a+n -> the next index of the last element
    //worst case O(nlogn)
    // sort(a.begin()+2,a.end())  // In cse of vector
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
}