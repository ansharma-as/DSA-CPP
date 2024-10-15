#include<iostream>
using namespace std;

class Hero{

    //properties
    private:
    int health;

    
    char level;

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health=h;
    }

    char getlevel(){
        return level;
    }
    void setlevel(char l){
        level=l;
    }
};
// int main(){
//     Hero h1;

//     // size of the properties int=4
//     cout<<"size: "<< sizeof(h1)<<endl;


//     return 0;
// }

// int  main(){

//     Hero Ramesh;
//     Ramesh.setHealth(70);
//     Ramesh.level='A';

//     cout<<"Health: "<<Ramesh.getHealth()<<endl;
//     cout<<"Level: "<<Ramesh.level<<endl;
//     return 0;
// }

//statically and dynamically allocated
int main(){
    Hero h1;
    Hero *b=new Hero();
    
}