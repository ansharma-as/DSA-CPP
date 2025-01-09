#include <iostream>
using namespace std;

void explain_pointers(){
    int a = 10;
    int *p = &a;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of p: " << p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Value at address p: " << *p << endl;

    cout << "----------------------------------------------------------------"<<endl;

    //double pointers
    int **ptr2 = &p ;
    cout << "Value of ptr2: " << ptr2 << endl;
    cout << "Address of ptr2: " << &ptr2 << endl;
    cout << "Value at address ptr2: " << *ptr2 << endl;
    cout << "Value at address *ptr2: " << **ptr2 << endl;
    cout << "Address at address **ptr2: " << &**ptr2 << endl;

}

void update(int **ptr2){
    
}

int main(){
    explain_pointers();
    return 0;
}
