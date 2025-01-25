#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void printList(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void reversePrint(Node* head){
    if(head==NULL){
        return;
    }
    reversePrint(head->next);
    cout<<head->data<<" ";
}

int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    printList(head);
    cout<<endl;
    reversePrint(head);
    return 0;
}