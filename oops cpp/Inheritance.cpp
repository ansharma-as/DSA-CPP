#include <iostream>
using namespace std;

class Human{
    public:
    int weight;
    int height;
    int age;

    public:
    int Age(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }

};

class Male: public Human{
    public:
    string color;

    void Sleep(){
        cout << "Male sleeps" << endl;
    }

};

int main(){
    Male Ansh;
    Ansh.age = 20;
    cout<< Ansh.age << endl;
    Ansh.setWeight(65);
    cout<< Ansh.weight << endl;
    Ansh.Sleep();
    Ansh.color = "Black";

    cout<< Ansh.color << endl;
    



    return 0;
};