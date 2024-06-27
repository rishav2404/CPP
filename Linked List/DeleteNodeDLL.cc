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

Node* deleteHeadDLL(Node* head){
    if(head == NULL || head->next == NULL) return NULL;

    Node* back = head;
    head = head->next;

    head->prev = NULL;
    back->next = NULL;

    delete back;
    return head;
}

Node* deleteTailDLL(Node* head){
    if(head == NULL || head->next == NULL) return NULL;

    Node* tail = head;
    while(tail->next){
        tail = tail->next;
    }

    Node* back = tail->prev;
    tail->prev = NULL;

    back->next = NULL;
    delete tail;
    return head;
}


Node* deleteKthNodeDLL(Node* head, int k){
    if(head == NULL) return NULL;
    int count =0;
    Node* temp = head;
    while(temp){
        count++;
        if(count == k) break;
        temp  = temp->next;
    }

    Node* front = temp->next;
    Node* back = temp->prev;

    /*Single element DLL*/
    if(back == NULL && front == NULL){
        delete temp;
        return NULL;
    }
    /*AT THE HEAD*/
    else if(back == NULL){
        return deleteHeadDLL(head);
    }
    /*AT THE TAIL*/
    else if(front == NULL){
        return deleteTailDLL(head);
    }

    back->next = front;
    front->prev = back;

    temp->next = NULL;
    temp->prev = NULL;

    delete temp;
    return head;
}

void deleteNode(Node* temp){
    /* can't delete head*/
    if(temp == NULL) return;
    Node* back = temp->prev;
    Node* front = temp->next;

    if(front == NULL){
        back->next = NULL;
        temp->prev = NULL;
        free(temp);
        return;
    }
    back->next = front;
    front->prev = back;

    temp->next = temp->prev = NULL;
    free(temp);
    return;
}

int main() {
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    vector<int> arr = {12,45,23,5,10};

    Node* head = convertToDLL(arr);
    printLL(head);

    // Node* head1 = deleteHeadDLL(head);
    // printLL(head1);

    // Node* head2 = deleteTailDLL(head);
    // printLL(head2);

    // Node* head3 = deleteKthNodeDLL(head,3);
    // printLL(head3);

    deleteNode(head->next);
    printLL(head);
}