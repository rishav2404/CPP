
#include <bits/stdc++.h>
using namespace std;


vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size()+1;
        vector<int> arr;
        arr.push_back(first);
        for(int i =0;i<n-1;i++){
            int k = arr[i] ^ encoded[i];
            arr.push_back(k);
        }
        return arr;
    }



int main() {
    vector<int > k = {1,2,3};
    vector<int > l = decode(k, 1);

    for(int i =0;i<l.size();++i){
        cout<<l[i]<<" ";
    }
}


