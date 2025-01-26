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

void PrintList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

Node *Recursive1(Node *head){
    if(head==NULL || head->next==NULL) {
        return head;
    }
    Node *rest_head = Recursive1(head->next);
    Node *rest_tail = head ->next;
    rest_tail ->next = head;
    head -> next = NULL;
    return rest_head;
       
}

// Node *Recursive2(Node *head){

// };

int main(){
    Node *head=new Node(10);
    head -> next = new Node (20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    PrintList(head);
    head=Recursive1(head);
    cout<<endl;
    PrintList(head);
    cout<<endl;
   // Recursive2(head);
    cout<<endl;
    
    return 0;
}