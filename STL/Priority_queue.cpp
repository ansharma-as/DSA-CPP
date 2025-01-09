#include <iostream>
using namespace std;

void explain_PQ(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);

    cout << "Priority Queue elements are: ";
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

}

void explain_minHeap(){
    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);

    cout << "Priority Queue elements are: ";
    cout<<pq.top() << " ";
}

int main(){
    explain_PQ();
    explain_minHeap();
    return 0;
}