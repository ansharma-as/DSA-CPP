#include <iostream>
using namespace std;

class Ansh{
    public:
    int health;
    char level;

    Ansh(){
        cout<< "coustructor called"<<endl;
    }
};

int main(){

    cout<< "hi"<<endl;
    Ansh ansh;
    cout<< "helllo" <<endl;


    //dynamically
    cout<< "dynamically constructed"<<endl;
    Ansh *h =new Ansh();


    return 0;
}
