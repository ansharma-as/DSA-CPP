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
    if(head==NULL) return;
    cout<< (head-> data)<<" ";
    for(Node *p=head->next ; p!= head; p=p->next){
        cout<<p->data<<" ";
    }
};

Node *deleteHead(Node *head){
    if(head==NULL) return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    else{
        Node *temp=head->next;
        head->data=head->next->data;
        head->next=head->next->next;
        delete temp;
        return head;
    }
}

Node *DeleteKth(Node *head, int k){
    if(head==NULL) return head;
    if(k==1) return deleteHead(head);
    Node *curr=head;
    for(int i=0 ; i<k-2 ; i++){
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next= curr-> next -> next;
    delete temp;
    return head;
}

int main(){
    Node *head= new Node(10);
    head->next= new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);
    head->next->next->next->next= head;
    printList(head);

    head= DeleteKth(head, 3);
    cout<<endl;
    printList(head);
    return 0;
}