#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int d){
        data=d;
        prev=next=NULL;
    }
};

Node *insertBegin(Node *head , int data){
    Node *temp = new Node(data);
    temp -> next = head;
    if(head != NULL){
        head -> prev =temp;
    }
    return temp;
    
}

void printList(Node *head){
    Node *curr=head;
    while(curr != NULL){
        cout<< curr->data <<" ";
        curr =curr -> next;
    }
}

int main(){
    Node *head= new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head -> next = temp1;
    temp1 -> prev = head ;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;

    printList(head);
    cout << endl;

    // Insert at the beginning and update the head
    head = insertBegin(head, 5);

    // Print the updated list
    printList(head);
    return 0;
}