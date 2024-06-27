#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node *next;

    public:
    Node(int data1, Node *next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

void printLL(Node *head){
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *convertArray2LL(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* add2Numbers(Node* head1 , Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* dummyHead = new Node(-1);
    Node* current = dummyHead;
    int carry = 0;

    while(temp1 || temp2){
        int sum = carry;
        if(temp1) sum += temp1->data;
        if(temp2) sum += temp2->data;

        Node* newNode = new Node(sum % 10);
        carry  = sum / 10 ;

        current->next = newNode;
        current = current->next;

        if(temp1) temp1=temp1->next;
        if(temp2) temp2=temp2->next;
    }
    if(carry){
        Node* newNode = new Node(carry);
        current->next = newNode;
    }

    return dummyHead->next;
} 

int main(){
    vector<int> arr1 = {4, 5, 9, 9};
    vector<int> arr2 = {3,5};

    Node *head1 = convertArray2LL(arr1);
    printLL(head1);

    Node *head2 = convertArray2LL(arr2);
    printLL(head2);
    
    Node *head3 = add2Numbers(head1 , head2);
    printLL(head3);

}