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
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

Node *reverse(Node *head){
    vector<int> temp;
    for(Node *curr=head ; curr != NULL; curr=curr->next){
        temp.push_back(curr->data);
    }

    for(Node *curr=head; curr!=NULL ; curr=curr->next){
        curr->data=temp.back();
        temp.pop_back();
    }
    return head;
}

Node *optimal(Node *head){
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL){
        Node *next=curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

int main(){
    Node *head = new Node(10);
    head ->next =new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next =new Node(40);

    printList(head);
    
    head= optimal(head);
    cout<<endl;
    printList(head);
    cout<<endl;


    return 0;

}