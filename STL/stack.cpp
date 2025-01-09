#include <iostream>

using namespace std;

void explain_Stack(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(3);
    //s.emplace(4);
    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl;
    cout << "Is stack empty: " << s.empty() << endl;

}

int main(){
    explain_Stack();
    return 0;
}