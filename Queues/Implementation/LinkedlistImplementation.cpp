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

struct Queue{
    Node *front, *rear;
    int size;
    Queue(){
        front=rear=NULL;
        size=0;
    }
    void dequeue(){
        if(front==NULL) return;
        size--;
        Node *temp=front;
        front =front->next;
        if(front==NULL) rear=NULL;
        delete temp;

    }
    void enqueue(int x){
        Node *temp=new Node(x);
        if(front==NULL){
            front=rear=temp;
            size++;
            return;
        }
        rear->next=temp;
        rear=temp;
        size++;
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<q.front->data<<endl;
    cout<<q.rear->data<<endl;
    q.dequeue();
    cout<<q.front->data<<endl;
    cout<<q.rear->data<<endl;
    return 0;
}