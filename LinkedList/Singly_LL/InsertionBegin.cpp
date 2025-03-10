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

Node* insertBegin(Node* head , int x){
    Node* temp= new Node(x);
    temp -> next = head;
    return temp;
}

int main(){
    Node *head = new Node(10);
    head = insertBegin(head, 5);
    head = insertBegin(head, 20);
    head = insertBegin(head, 30);
    
    printList(head);
    return 0;
}