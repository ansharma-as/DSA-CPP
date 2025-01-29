#include <iostream>
#include<unordered_set>
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
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

Node *swapNaive(Node *head ){
    Node *curr=head;
    while(curr!=NULL && curr->next != NULL){
        swap(curr->data, curr->next->data);
        curr=curr->next->next;
    }
    return head;
}

int main(){
    Node *head = new Node(10);
    head ->next =new Node(21);
    head -> next -> next = new Node(31);
    head -> next -> next -> next =new Node(51);
    head -> next -> next -> next -> next =new Node(60);
    head -> next -> next -> next -> next -> next =new Node(80);


    printList(head);
    head= swapNaive(head);
    cout<<endl;
    printList(head);
    cout<<endl;

    return 0;
}