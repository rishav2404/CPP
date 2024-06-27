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


Node* reverseDLL(Node* head){
    if(head== NULL || head->next == NULL) return head;
    /* BRUTE FORCE */
    /* TC = O(2n) , SC = O(n) */
    // stack<int> st;
    // Node* temp = head;
    // while(temp){
    //     st.push(temp->data);
    //     temp = temp->next;
    // }
    // temp = head;
    // while(temp){
    //     temp->data = st.top();
    //     st.pop();
    //     temp = temp->next;
    // }

    /* OPTIMISED*/
    /* TC = O(n) , SC = O(1) */
    Node* last = NULL;
    Node* current = head;
    while(current){
        last = current->prev;
        current->prev = current->next;
        current->next = last;
        current = current->prev;
    }
    head = last->prev;
    return head;
}

int main() {
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    vector<int> arr = {12,45,23,5,10};

    Node* head = convertToDLL(arr);
    printDLL(head);

    Node* head1 = reverseDLL(head);
    printDLL(head1);

}