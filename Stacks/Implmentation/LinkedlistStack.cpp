#include <iostream>
#include <stack>
using namespace std;
 
struct Node{
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

struct MYStack{
    Node *head;
    int sz;
    MYStack(){
        head=NULL;
        sz=0;
    }
    void push(int x){
        Node *temp=new Node(x);
        temp->next=head;
        head=temp;
        sz++;
    }
    int pop(){
        if(head==NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        int res= head->data;
        Node *temp=head;
        head=head->next;
        delete(temp);
        sz--;
        return res;
    }

    int size(){
        return sz;
    }

    int isEmpty(){
        return head==NULL;

    }

    int peek(){
        if(head==NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return head->data;
    }
};

int main(){
    MYStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}