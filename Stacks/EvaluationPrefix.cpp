#include <iostream>
#include <stack>
#include <cctype> // For isdigit()
using namespace std;

int evaluatePostfix(string exp) {
    stack<int> s;

    for (int i=0 ; i<exp.size(); i++) {
        if (isdigit(exp[i])) {
            s.push(exp[i] - '0');  // Convert char to int
        } 
        else {
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();

            switch (exp[i]) {
                case '+': s.push(val1 + val2); break;
                case '-': s.push(val1 - val2); break;
                case '*': s.push(val1 * val2); break;
                case '/': s.push(val1 / val2); break;
            }
        }
    }
    
    return s.top();
}

int main() {
    string exp = "231*+9-"; // Equivalent to (2 + (3 * 1) - 9)
    cout << "Prefix Evaluation Result: " << evaluatePostfix(exp) << endl;
    return 0;
}
