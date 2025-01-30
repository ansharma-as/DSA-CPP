#include <iostream>
using namespace std;

struct MYStack{
    int *arr;
    int cap;
    int top;
    MYStack(int c){
        cap=c;
        arr=new int[cap];
        top=-1;
    }
    void push(int x){
        if(top==cap-1){
            cout<<"Stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    int pop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        int res=arr[top];
        top--;
        return res;
    }

    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    int size(){
        return top+1;
    }

    bool isEmpty(){
        return top==-1;
    }

    ~MYStack(){
        delete[] arr;
    }

};

int main(){
    MYStack s(5);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;

    return 0;

}