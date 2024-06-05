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

/* Convert array to Linked List */
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

/* Length Of Linked List */
int lengthOfLL(Node* head){
    int count =0;
    Node* temp = head;
    while (temp){
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    vector<int> arr = {1,2,13,4,15};
    Node* head = convertArray2LL(arr);
    cout << head->data <<endl;
    Node* temp = head;
    while(temp){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<< "Lenght of LL : " << lengthOfLL(head) <<endl;
}