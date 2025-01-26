#include<iostream>
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
    Node *curr=head;
    while(curr!= NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void medianNaive(Node *head){
    if(head==NULL) return ;
    int count =0 ;
    Node *curr;
    for(curr=head ; curr!= NULL; curr=curr->next){
        count++;
    }
    curr=head;
    for(int i=0; i<count/2; i++){
        curr=curr->next;
    }
    cout<<curr->data;
}

void MedianOptimal(Node *head){
    if(head==NULL) return;
    Node *slow=head; 
    Node *fast=head;
    while(fast!=NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}

int main(){
    Node *head= new Node(10);
    head->next= new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);
    printList(head);
    cout<<endl;
    medianNaive(head);
    
    cout<<endl;
    MedianOptimal(head);
    
    cout<<endl;
    return 0;
}