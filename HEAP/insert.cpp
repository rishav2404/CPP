#include <bits/stdc++.h>
using namespace std;


class heap {

    public:
    int arr[100];
    int size = 0;

    void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1) {
            int parent  = index/2;

            if(arr[parent] < arr[index]) {
                swap(arr[parent],arr[index]);
                index  = parent;
            }
            else {
                return;
            }
        }
    }

    void print() {
        for(int i = 0; i <= size; i++) {
            cout << arr[i] << " ";
        } cout << endl;
    }
};

