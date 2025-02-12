#include <iostream>
#include <stack>

using namespace std;

class MYStack {
    stack<int> s;
    int min;

public:
    MYStack() : min(INT_MAX) {}  // Initialize min to a large value

    int getMin() {
        if (s.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return min;
    }

    int peek() {
        if (s.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        int t = s.top();
        return (t <= min) ? min : t;
    }

    int pop() {
        if (s.empty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        
        int t = s.top();
        s.pop();
        
        if (t <= min) {
            int res = min;
            min = 2 * min - t;
            return res;
        }
        return t;
    }

    void push(int x) {
        if (s.empty()) {
            min = x;
            s.push(x);
        } 
        else if (x <= min) {  // Fixed syntax
            s.push(2 * x - min);
            min = x;
        } 
        else {
            s.push(x);
        }
    }
};

int main() {
    MYStack s;
    
    s.push(3);
    s.push(5);
    cout << "Min: " << s.getMin() << endl; // Output: 3
    
    s.push(2);
    s.push(1);
    cout << "Min: " << s.getMin() << endl; // Output: 1
    
    cout << "Popped: " << s.pop() << endl; // Output: 1
    cout << "Min: " << s.getMin() << endl; // Output: 2
    
    cout << "Popped: " << s.pop() << endl; // Output: 2
    cout << "Top Element: " << s.peek() << endl; // Output: 5

    return 0;
}
