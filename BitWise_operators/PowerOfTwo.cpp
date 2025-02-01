#include <iostream>
using namespace std;

bool isPowerNaive(int n){
    if(n==0) return false;
    while(n!=1){
        if(n%2!=0) return false;
        n=n/2;
    }
    return true;
}
bool IsPower(int n){
    if(n==0) return false;
    return ((n&(n-1))==0);
}
int main(){

    int n=4;
    cout<<IsPower(n);
    cout<<endl;
    cout<<isPowerNaive(n);
    cout<<endl;

    return 0;
}