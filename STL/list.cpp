#include <iostream>
#include <list>
using namespace std;
void explain_list(){

    list<int> l;
    l.push_back(1);
    l.__emplace_back(2);
    l.push_front(3);

    for(auto it = l.begin(); it != l.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    explain_list();
    return 0;
}