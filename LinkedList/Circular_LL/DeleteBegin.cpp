#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d){
        data= d;
        next= NULL;
    }
};

Node *deleteNiave(Node* head){
    if(head == NULL)return NULL;
    if(head -> next == NULL){
        delete head;
        return NULL;
    }
    else{
    Node *curr= head;
    while(curr-> next != head){
        curr =curr  -> next;

    }
    curr -> next = head -> next;
    delete head;
    return (curr -> next);
    }
}

Node *optimal(Node *head){
    if(head==NULL) return NULL;
    if(head -> next == head){
        delete head;
        return NULL;
    }
    else{
        head -> data = head -> next -> data;
        Node *temp= head-> next;
        head -> next = head -> next -> next;
        delete temp;
        return head;
    }
}


void printList(Node *head){
    if(head==NULL) return;
    cout<<(head->data)<<" ";
    for(Node *p=head-> next; p!=head; p=p-> next){
        cout<<p->data<<" ";
    }
}

int main(){
    Node *head= new Node(10);
    head-> next = new Node(20);
    head-> next-> next = new Node(30);
    head-> next-> next-> next = head;
    printList(head);
    cout<<endl;
    head=deleteNiave(head);
    printList(head);
    cout<<endl;
    head= optimal(head);
    printList(head);
    cout<<endl;
    return 0;
}