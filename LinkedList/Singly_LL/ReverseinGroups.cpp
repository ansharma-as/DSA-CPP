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

Node *ReverseGroups(Node *head, int k){
    Node *curr=head , *prev=NULL , *next=NULL;
    int count=0;

    while(curr != NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        head->next=ReverseGroups(next, k);
    }
    return prev;
}


void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head = new Node(10);
    head ->next =new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next =new Node(40);
    head -> next -> next -> next -> next =new Node(50);
    head -> next -> next -> next -> next -> next =new Node(60);
    
    printList(head);
    head=ReverseGroups(head, 3);
    cout<<endl;
    printList(head);

    return 0;

}