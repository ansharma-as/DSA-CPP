#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int d){
        data=d;
        prev=next=NULL;
    }
};

Node *DeleteEnd(Node *head){
    if(head == NULL ) return NULL;

    if(head -> next == NULL){
        delete head;
        return NULL;
    }
    Node *curr= head;
    while(curr -> next != NULL){
        curr=curr-> next;
    }
    curr ->prev->  next= NULL;
    delete curr;
    return head;
}

void printList(Node *head){
    Node *curr=head;
    while(curr != NULL){
        cout<< curr->data <<" ";
        curr =curr -> next;
    }
}

int main(){
    Node *head= new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head -> next = temp1;
    temp1 -> prev = head ;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;

    printList(head);
    cout << endl;

    // Insert at the beginning and update the head
    head = DeleteEnd(head);

    // Print the updated list
    printList(head);
    return 0;
}