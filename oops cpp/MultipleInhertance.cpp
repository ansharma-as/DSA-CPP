#include <iostream>
using namespace std;

class Dog{
    public:
    int age;
    int weight;

    void Bark(){
        cout<< "Barking" <<endl;

    }
};

class Human{
    public:
    int age;
    int weight;

    void Speak(){
        cout<< "Speaking" <<endl;

    }
};

class Hybrid: public Human, public Dog{

};

int main(){
    Hybrid object;
    object.Speak();
    object.Bark();
};