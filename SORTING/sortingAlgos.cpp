#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> arr, int size){
    for (int i = 0; i < size - 2; i++){
        int mini = i;
        for (int j = 0; j < size - 1; j++){
            if(arr[j] < arr[mini]) mini = j;
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}

void bubblesort(vector<int> arr, int size){
    for(int i = size-1 ; i >= 0 ; i--){
        int didSwap = 0;
        for(int j = 0 ; j <= i-1 ; j++){
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0) {
            break;
        }
    }
}

void insertionSort(vector<int> arr, int size){
    for (int i = 1; i < size; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}


void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    //storing elements in the temporary array in a sorted manner//
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) cin >> arr[i];
    // selectionSort(arr, n);
    // for (int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }

    insertionSort(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    vector<int> arr1 = {9, 4, 7, 6, 3, 1, 5}  ;
    int n1 = 7;
    mergeSort(arr1, 0, n1 - 1);
}