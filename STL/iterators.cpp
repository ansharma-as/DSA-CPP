#include <iostream>

using namespace std;


void explainIterators(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    //vector<int>::iterator it;
    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout << *it << " ";
    // }

    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    // cout << *it << " ";

    for(auto it:v){
        cout << it << " ";
    }
}
int main(){
    explainIterators();
    return 0;

}