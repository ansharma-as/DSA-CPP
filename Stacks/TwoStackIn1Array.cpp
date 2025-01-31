#include <iostream>
#include <stack>
using namespace std;

bool Matching(char a , char b){
    return (
        (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']')
    );
}

bool isBalanced(string &str){
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);
        }
        else{
            if(s.empty() == true) return false;
            else if(Matching(s.top(), str[i]) == false) return false;
            else s.pop();
        }
    }
    return s.empty();
}

int main(){
    string str = "{[()]}";
    if(isBalanced(str)) cout << "Balanced" << endl;
    else cout << "Not Balanced" << endl;
    return 0;
}