// FOR PUBLIC
// #include <iostream>
// using namespace std;


// class Ansh {

//     public:
//     int health;
//     int level;

// };

// int main() {
//     Ansh ansh;
//     cout << "Size of Ansh object: " << sizeof(ansh) << endl;

//     cout << "health is: "<< ansh.health << endl;
//     cout << "level is: "<< ansh.level << endl;

//     ansh.health = 100;
//     ansh.level = 'A';

//     return 0;
// }











//Public-private Mix
#include <iostream>
using namespace std;


class Ansh {

    private:
    int health;

    public:
    char level;

// Getters and setters
        int gethealth() {
            return health;
        }

        void sethealth(int h) {
            health = h;
        }

        void setlevel(char l) {
            level = l;
        }

        char getlevel() {
            return level;
        }

    
};

int main() {
    Ansh ansh;
    


    ansh.sethealth(100);
    ansh.setlevel('B');


    // Accessing private members directly
    cout << "health is: "<< ansh.gethealth() << endl;
    cout << "level is: "<< ansh.getlevel() << endl;

    return 0;
}
