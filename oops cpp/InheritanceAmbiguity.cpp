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

    void Bark(){
        cout<< "Speaking" <<endl;

    }
};

class Hybrid: public Human, public Dog{

};

int main(){
    Hybrid object;
    object.Human::Bark();
    object.Dog::Bark();
};