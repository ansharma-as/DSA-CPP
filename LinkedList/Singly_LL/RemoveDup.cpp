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

void removeDup(Node *head){
    Node *curr=head;
    while(curr!=NULL &&curr->next!=NULL){
        if(curr->data==curr->next->data){
            Node *temp=curr->next;
            curr->next=curr->next->next;
            delete temp;

        }
        else{
            curr=curr->next;

        }
    }

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
    head -> next -> next = new Node(20);
    head -> next -> next -> next =new Node(40);
    head -> next -> next -> next -> next =new Node(40);
    head -> next -> next -> next -> next -> next =new Node(50);
    
    printList(head);
    removeDup(head);
    cout<<endl;
    printList(head);

    return 0

}