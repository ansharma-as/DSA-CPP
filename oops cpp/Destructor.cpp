#include <iostream>
using namespace std;

class Ansh {
    private:
    int health;
    char level;

    public:
    Ansh(int health, char level){
        this->health = health;
        this->level = level;
    }

    void print(){
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
    }

    ~Ansh(){
        cout << "Destructor called" << endl;
    }
};

int main(){
    Ansh ansh(100, 'A');
    ansh.print();

    Ansh* vansh = new Ansh(200, 'B');
    vansh->print();

    delete vansh;

    return 0;
}