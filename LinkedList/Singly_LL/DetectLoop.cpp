#include <iostream>
#include<unordered_set>
using namespace std;

struct Node{
    int data;
    Node *next;
    //bool visited;
    Node(int d){
        data=d;
        next=NULL;
      //  visited=false;
    }
};

void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

// bool detectLoop(Node *head){
//     Node *curr=head;
//     while(curr!=NULL){
//         if(curr->visited==true){
//             return true;
//         }
//         curr->visited=true;
//         curr=curr->next;
//     }
//     return false;
// }

bool detectLoop(Node *head){
    Node *temp=new Node(0);
    Node *curr= head;
    while(curr!=NULL){
        if(curr->next==NULL) return false;
        if(curr->next==temp) return true;
        Node *curr_next=curr->next;
        curr->next=temp;
        curr=curr_next;
    }
    return false;
}

bool Hasing(Node *head){
    Node *curr=head;
    unordered_set<Node *> s;
    while(curr!=NULL){
        if(s.find(curr)!=s.end()){
            return true;
        }
        s.insert(curr);
        curr=curr->next;
    }
    return false;
}

bool FloydCycle(Node *head){
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main(){
    Node *head = new Node(10);
    head ->next =new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next =new Node(40);
    head -> next -> next -> next -> next = head;

    //cout<<detectLoop(head);
    cout<<endl;
    cout<<Hasing(head);
    cout<<endl;
    cout<<FloydCycle(head);

    return 0;
}