#include <iostream>

using namespace std;

void explain_Queue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    //q.emplace(4);
    cout << "Front element: " << q.front() << endl;
    q.back() += 5;
    cout << "Back element: " << q.back() << endl;
    cout<<q.front() << endl;
    q.pop();
    cout << "Front element after pop: " << q.front() << endl;
}

int main(){
    explain_Queue();
    return 0;
}
