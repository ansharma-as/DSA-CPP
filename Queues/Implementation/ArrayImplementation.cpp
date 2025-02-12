#include <iostream>

using namespace std;

struct Queue{
    int size , cap;
    int *arr;
    Queue(int c){
        cap=c;
        size=0;
        arr=new int[cap];
    }
    bool isEmpty(){
        return (size==0);
    }
    bool isFull(){
        return (size==cap);
    }
    int getFront(){
        if(isEmpty()) return -1;
        else return arr[0];
    }
    int getRear(){
        if(isEmpty()) return -1;
        else return arr[size-1];
    }    
    void enqueue(int x){
        if(isFull()) return;
        arr[size]=x;
        size++;
    }
    void dequeue(){
        if(isEmpty()) return;
        for(int i=0; i<size-1; i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
};

int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    q.dequeue();
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    return 0;
}