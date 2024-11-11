#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void Speak(){
        cout<< "Animal Speaking" <<endl;

    }
};

class Dog: public Animal{

};

class German: public Dog{

};

int main(){
    German g;
    g.Speak();
}