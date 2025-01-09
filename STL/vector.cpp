#include <iostream>

using namespace std;

void explainvector(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << endl;
    cout << "Size: " << v.size() << endl;
    v.pop_back();
    cout << "Size after pop_back: " << v.size() << endl;
    
    cout << "-----------" << endl;

    vector<int> v1;
    v1.emplace_back(1);
    v1.emplace_back(2);
    v1.emplace_back(3);
    v1.emplace_back(4);
    cout << v1[0] << " " << v1[1] << " " << v1[2] << " " << v1[3] << endl;
    cout << "Size: " << v1.size() << endl;
    v1.pop_back();
    cout << "Size after pop_back: " << v1.size() << endl;

    cout << "-----------" << endl;

    // vector<pair<int, int>> v2;
    // v2.push_back({1, 2});
    // v2.emplace_back(2, 3);
    // cout << v2[0].first << " " << v2[0].second << endl;
    // cout << v2[1].first << " " << v2[1].second << endl;
    // v2.pop_back();
    // cout << "Size after pop_back: " << v2.size() << endl;

    cout << "-----------" << endl;

    vector<string> v3;
    v3.push_back("Hello");
    v3.emplace_back("World");
    cout << v3[0] << " " << v3[1] << endl;

    cout << "-----------" << endl;
    
    vector<int> v4(5,100);
    cout << "Size: " << v4.size() << endl;
    for(int i=0 ; i<v4.size() ; i++){
        cout << v4[i] << " ";
    }
    cout << endl;


    cout << "-----------" << endl;


    vector<int> v5(5);
    cout << "Size: " << v5.size() << endl; 
    for(int i=0 ; i<v5.size() ; i++){
        cout << v5[i] << " ";
    }
    cout << endl;

    cout << "-----------" << endl;

    vector<int> v6(5,20);
    cout << "Size: " << v6.size() << endl;
    for(int i=0 ; i<v6.size() ; i++){
        cout << v6[i] << " ";
    }
    cout << endl;

    cout << "-----------" << endl;
    vector<int> v7(v6);
    cout << "Size: " << v7.size() << endl;
    for(int i=0 ; i<v7.size() ; i++){
        cout << v7[i] << " ";
    }
    cout << endl;
    
}



int main() {
    explainvector();
    return 0;

}