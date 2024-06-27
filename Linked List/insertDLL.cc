#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
        prev = nullptr;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

Node* convertToDLL(vector<int> arr){
    Node* head  = new Node(arr[0]);
    Node* prev = head;
    for(int  i=1;i < arr.size(); i++){
        Node* temp = new Node(arr[i] , nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}



int main() {
    vector<int> arr = {12,45,23,5, 10};

    Node* head1 = convertToDLL(arr);
    printLL(head1); 
}