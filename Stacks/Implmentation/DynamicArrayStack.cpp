#include <iostream>
using namespace std;

struct MyStack{
    vector<int> v;
    void push(int x){
        v.push_back(x);
    }

    int pop(){
        if(v.empty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        int res = v.back();
        v.pop_back();
        return res;
    }

    int size(){
        return v.size();
    }

    bool isEmpty(){
        return v.empty();
    }

    int peek(){
        if(v.empty()){
            cout<<"stack is empty "<<endl;
            return -1;
        }
        return v.back();
    }
};

int main(){
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}