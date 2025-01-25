#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

int main(){
    Node* head=new Node(5);
    Node* temp1=new Node(10);
    Node* temp2=new Node(15);

    head->next=temp1;
    temp1->next=temp2;

//alternate and better implementation
    Node* head= new Node(5);
    head->next=new Node(10);
    head->next->next=new Node(15);
    cout<<"Linked List: ";
    cout<<(head);

    return 0;
}