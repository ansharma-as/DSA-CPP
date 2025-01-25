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

Node* insertX(Node* head, int pos , int data){
    Node* temp= new Node(data);
    if(pos==1){
        temp -> next = head;
        return temp;
    }
    Node* curr=head;
    for(int i=1 ; i<=pos-2 && curr!=NULL ; i++){
        curr=curr-> next;
    }
    if(curr== NULL) return temp;
    temp -> next= curr -> next;
    curr -> next = temp;

    return head;

}

void printList(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<< curr-> data<<" ";
        curr= curr-> next;
    }

}


int main(){
    Node* head = new Node(10);
    head = insertX(head, 1, 20);
    head = insertX(head, 2, 30);
    head = insertX(head, 3, 40);
    head = insertX(head, 4, 50);
 
    printList(head);
    return 0;

}