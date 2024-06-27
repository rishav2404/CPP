#include <bits/stdc++.h>
using namespace std;


/* can use struct and class as well*/
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

int main() {
    vector<int> arr = {1,2,3,4,5};
    Node* y = new Node(arr[3], nullptr);// Memory adderess (use this)
    cout<< y << endl;
    cout<< y->data << endl;
    cout<< y->next << endl;


    Node k = Node(arr[3], nullptr);        // Object
    // cout<< k << endl;  throws error
    cout<< k.data << endl;
    cout<< k.next << endl;
}