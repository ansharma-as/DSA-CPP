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

Node *insertEnd(Node *head , int x){
    Node *temp = new Node(x);
    if(head == NULL){
        temp -> next = temp;
        return temp;
    }
    else{
        Node *curr = head;
        while(curr -> next != head){
            curr = curr -> next;
        }
        curr -> next = temp;
        temp -> next = head;
        return head;
    }
    
}

Node *optimal(Node *head, int x){
    Node *temp= new Node(x);
    if(head== NULL){
        return temp->next =temp;
        return temp;
    }
    else{
        temp -> next= head -> next;
        head -> next = temp;
        int t = head -> data;
        head -> data = temp -> data;
        temp -> data = t;
        return temp;
    }
}

void printList(Node *head){
    Node *curr= head;
    while(curr != 0){
        cout<<(curr->data)<<" ";
        curr=curr->next;
        if(curr==head) break;
    }
}

int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = head;
    head = optimal(head, 15);
    printList(head);
    cout<<endl;
    return 0;
}