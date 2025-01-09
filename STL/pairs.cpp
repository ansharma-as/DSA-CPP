#include <iostream>
#include <utility> 
using namespace std;

void explainpair(){
    pair<int, int> p1(1, 3);
    pair<int, int> p2(2, 4);
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    
}

int main(){
    explainpair();
    return 0;
}