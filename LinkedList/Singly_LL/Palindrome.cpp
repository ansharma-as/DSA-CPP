#include <iostream>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

Node *reverse(Node *head){
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL){
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

bool isPalNaive(Node *head){
    stack <char> s;
    for(Node *curr=head; curr!=NULL; curr=curr->next)
    {
        s.push(curr->data);
    }
    for(Node *curr=head; curr!=NULL ; curr=curr->next){
        if(s.top() != curr->data){
            return false;
        }
        s.pop();
    }
    return true;
}

bool isPalOptimal(Node *head){
    if (head==NULL) return true;
    Node *slow=head , *fast=head;
    while(fast->next != NULL && fast ->next ->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node *rev = reverse(slow->next);
    Node *curr=head;
    while(rev!=NULL){
        if(rev->data != curr->data){
            return false;
        }
        rev=rev->next;
        curr=curr->next;
    }
    return true;
}


void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head = new Node('g');
    head ->next =new Node('f');
    head -> next -> next = new Node('g');
    
    
    //printList(head);
    cout<<isPalNaive(head);
    cout<<endl;
    cout<<isPalOptimal(head);
    

    return 0;

}