#include <iostream>
using namespace std;

bool isPal(int n){
    int result = 0 ;
    int temp=n;
    while (temp !=0 ){
        int ld = temp % 10;
        result = result * 10 + ld;
        temp = temp / 10;
    }
    return (result == n);
}

int main(){
    int n;
    cout << "enter a number: ";
    cin >> n;
    isPal(n);

    return 0;
}