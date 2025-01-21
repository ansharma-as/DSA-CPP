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

Node* deleteBegin(Node* head){
    if(head==NULL) return NULL;

    else{
        Node* temp= head-> next;
        delete head;
        return temp;
    }
    
}

int main(){
    Node *head = new Node(10);
    head-> next = new Node(20);
    head-> next-> next = new Node(30);
    head = deleteBegin(head);
    //head =  deleteBegin(head);
   
    
    printList(head);
    return 0;
}