#include <iostream>

using namespace std;

void explain_DQ(){

    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);
    for(auto it = dq.begin(); it != dq.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

}

int main(){
    explain_DQ();
    return 0;
}