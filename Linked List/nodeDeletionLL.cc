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

/* Convert array to Linked List */
Node *deleteHeadNode(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp; /*free(temp);*/
    return head;
}

Node *deleteTailNode(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

Node* deleteNode(Node *head, int value){
    if (head == NULL)
        return head;
    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;
    while (temp != numm){
        if(temp->data == value){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


Node *deleteKthNode(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int cnt = 0;
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertArray2LL(arr);
    head = deleteHeadNode(head);
    printLL(head);

    Node *head1 = convertArray2LL(arr);
    head1 = deleteTailNode(head1);
    printLL(head1);

    Node *head2 = convertArray2LL(arr);
    head2 = deleteKthNode(head2, 3);
    printLL(head2);

    Node *head3 = convertArray2LL(arr);
    head3 = deleteNode(head2, 3);
    printLL(head3);
}