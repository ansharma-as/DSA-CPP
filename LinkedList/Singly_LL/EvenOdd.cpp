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

Node *SegregateEvenOdd(Node *head){
    Node *es=NULL , *ee=NULL , *os=NULL , *oe=NULL;
    for(Node *curr=head; curr!=NULL; curr=curr->next){
        int x=curr->data;
        if(x%2==0){
            if(es==NULL){
                es=ee=curr;
            }
            else{
                ee->next=curr;
                ee=ee->next;
            }
        }
        else{
            if(os==NULL){
                os=oe=curr;
            }
            else{
                oe->next=curr;
                oe=oe->next;

            }
        }
    }
    if(es ==NULL || os==NULL){
        return head;
    }
    ee->next=os;
    oe->next=NULL;
    return es;
}

int main(){
    Node *head = new Node(10);
    head ->next =new Node(21);
    head -> next -> next = new Node(31);
    head -> next -> next -> next =new Node(51);
    head -> next -> next -> next -> next =new Node(60);
    head -> next -> next -> next -> next -> next =new Node(80);


    printList(head);
    head= SegregateEvenOdd(head);
    cout<<endl;
    printList(head);
    cout<<endl;

    return 0;
}