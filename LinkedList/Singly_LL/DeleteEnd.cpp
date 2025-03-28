#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void printList(Node *head){
    Node *curr= head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr= curr-> next;
    }
}

Node* deleteEnd(Node* head){
    if(head==NULL) return NULL;
    if(head-> next == NULL){
        delete head;
        return NULL;
    }
    Node* curr= head;
    while(curr -> next -> next != NULL){
        curr= curr -> next;
    }
    delete curr-> next;
    curr-> next = NULL;

    return head;
}

int main(){
    Node *head = new Node(10);
    head-> next = new Node(20);
    head-> next-> next = new Node(30);
    head = deleteEnd(head);
    //head = deleteEnd(head);
    printList(head);
    return 0;
}