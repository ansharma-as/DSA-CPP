#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string &str) {
    stack<char> s;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '{') {  
            s.push(str[i]);
        } 
        else if (str[i] == '}') {  
            if (s.empty() || s.top() != '{') return false;  
            s.pop();
        } 
        else if (str[i] == '#') {  
            if (!s.empty() && s.top() == '#') {  
                s.pop();  
            } else {
                s.push(str[i]);
            }
        }
    }
    return s.empty();
}

int main() {
    string str1 = "{##}";  // Balanced
    string str2 = "{#}";   // Not Balanced
    string str3 = "{##}}"; // Not Balanced
    string str4 = "##{}";  // Balanced

    cout << (isBalanced(str1) ? "Balanced" : "Not Balanced") << endl; 
    cout << (isBalanced(str2) ? "Balanced" : "Not Balanced") << endl; 
    cout << (isBalanced(str3) ? "Balanced" : "Not Balanced") << endl; 
    cout << (isBalanced(str4) ? "Balanced" : "Not Balanced") << endl; 

    return 0;
}
