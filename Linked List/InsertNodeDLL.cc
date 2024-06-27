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

void printDLL(Node* head){
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

Node* insertHeadDLL(int val, Node* head){
    Node* newHead = new Node(val , head, NULL);
    head->prev = newHead;
    return newHead;
}

Node* insertTailDLL(int val, Node* head){
    if(head->next == NULL){
        return insertHeadDLL(val,head);
    }

    Node* tail = head;
    while(tail->next){
        tail = tail->next;
    }
    Node* newTail = new Node(val,NULL,NULL);
    newTail->prev = tail;
    tail->next = newTail;
    return head;
}

Node* insertAtKthPosition(Node*)


int main() {
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    vector<int> arr = {12,45,23,5,10};

    Node* head = convertToDLL(arr);
    printDLL(head);

    // Node* head1 = insertHeadDLL(300,head);
    // printDLL(head1);
    
    Node* head2 = insertTailDLL(2002,head);
    printDLL(head2);
}