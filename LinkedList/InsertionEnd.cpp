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

Node* insertEnd(Node* head, int x){
    Node* temp = new Node(x);
    if(head==NULL) return temp;
    Node* curr = head;
    while (curr->next!=NULL){
        curr=curr->next;
    }
    curr-> next = temp;
}

int main(){
    Node *head = new Node(10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    
    printList(head);
    return 0;
}