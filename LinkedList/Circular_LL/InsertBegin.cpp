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
    cout<<(head->data)<<" ";
    for(Node *p=head-> next; p!=head; p=p-> next){
        cout<<p->data<<" ";
    }
}

Node *NaiveBegin(Node *head, int x){
    Node *temp= new Node(x);
    if(head==NULL) return temp->next=temp;
    else{
        Node *curr=head;
        while(curr -> next != head){
            curr=curr-> next;
        }
        curr -> next =temp;
        temp -> next = head;
    }
    return temp;
}

Node *OptimalTail(Node *tail, int n){
    Node *temp= new Node(n);
    if(tail==NULL){
        temp-> next = temp;
        return temp;
    }
    else{
        temp-> next = tail-> next;
        tail-> next = temp;
        return tail;
    }
}

Node *Optimal(Node *head , int x){
    Node *temp =new Node(x);
    if(head==NULL){
        temp-> next= temp;
        return temp;

    }
    else{
        temp-> next = head -> next;
        head -> next = temp;

        int t = head -> data;
        head-> data = temp -> data;
        temp -> data= t;

        return temp;
    }
}
int main(){
    Node *head= new Node(10);
    head-> next = new Node(20);
    head-> next-> next = new Node(30);
    head-> next-> next-> next = head;
    printList(head);
    cout<<endl;
    //head=NaiveBegin(head, 5);
    //printList(head);
    cout<<endl;
    head=OptimalTail(head, 5);
    printList(head);
    cout<<endl;
    //head= Optimal(head,5);
    //printList(head);
    return 0;
}