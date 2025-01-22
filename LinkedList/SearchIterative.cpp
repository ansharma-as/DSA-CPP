#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d){
        data=d;
        next= NULL;
    }
};

int search(Node *head, int x){
    int pos=1;
    Node *curr =head;
    while(curr != NULL){
        if(curr->data == x){
            return pos;
        }
        else{
            pos++;
            curr= curr -> next;
        }
    }
    return -1;
}

void printList(Node *head){
    Node *curr=head;
    while (curr!=NULL){
        cout<<curr-> data << " ";
        curr=curr-> next;
    }
}

int main(){
    Node *head= new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node (15);
    head -> next -> next -> next = new Node(35);
    printList(head);
    cout<<endl;
    cout<<search(head,15);
    return 0;
}
