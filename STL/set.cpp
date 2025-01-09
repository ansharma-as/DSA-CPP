#include <iostream>
#include <set>
using namespace std;

void explain_set(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    cout << "Set elements are: ";
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    explain_set();
    return 0;
}