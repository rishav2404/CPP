#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArray2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int searchElement(Node* head , int value){
    Node* temp = head;
    while (temp){
        if(temp->data == value) return 1;
        temp = temp->next;
    }
    return 0;
}

int main() {
    vector<int> arr = {10,2,13,4,15};
    Node* head = convertArray2LL(arr);
    cout<< "=================="<<endl; 
    cout<< searchElement(head , 1) << endl;
}