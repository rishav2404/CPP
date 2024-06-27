#include <bits/stdc++.h>
using namespace std;

/* can use struct and class as well*/
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void printLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *convertArray2LL(vector<int> &arr)
{
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

Node *insertAtHead(Node *head, int value)
{
    return new Node(value, head);
}

Node *insertAtTail(Node *head, int value)
{
    if (head == NULL)
        return new Node(value);
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(value);
    temp->next = newNode;
    return head;
}

/* k : ( 1 <-> n+1)*/
Node* insertAtKth(Node* head, int value, int k){
    if(head==NULL){
        if(k==1) return new Node(value);
        return head;
    }
    
    if(k==1) return new Node(value, head);
    int count = 0;
    Node* temp = head;
    while(temp){
        count++;
        if(count == k-1){
            Node* newNode = new Node(value, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* insertBeforeValue(Node* head, int value, int newValue){
    if(head==NULL) return NULL;
    if(head->data == value) return new Node(newValue, head);
    Node* temp = head;
    while(temp->next){
        if(temp->next->data == value){
            Node* newNode = new Node(newValue, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

/*========---MAIN---==========*/
int main()
{
    vector<int> arr = {10, 12, 3, 44, 225};

    Node *head = convertArray2LL(arr);
    head = insertAtHead(head,555);
    printLL(head);

    Node *head1 = convertArray2LL(arr);
    head1 = insertAtTail(head1, 505);
    printLL(head1);

    // Node *head2 = convertArray2LL(arr);
    // head2 = insertAtKth(head2, 1700 , 3);
    // printLL(head2);

    Node *head2 = convertArray2LL(arr);
    head2 = insertBeforeValue(head2, 3 , 89);
    printLL(head2);

}