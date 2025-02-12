#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverseIterative(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

void reverseRecursive(queue<int> &q){
    if(q.empty()) return;
    int x=q.front();
    q.pop();
    reverseRecursive(q);
    q.push(x);
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    reverseRecursive(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}