#include <iostream>
using namespace std;

int CountNaive(int n){
    int res=0;
    while(n>0){
        if(n%2==1){
            res++;
        }
        n=n/2;
    }
    return res;
}

int countOptimal(int n){
    int res=0;
    while(n>0){
        n= n& (n-1);
        res=res+1;
    }
    return res;
}

int main(){

    int n=5;
    cout<<CountNaive(n);
    cout<<endl;
    cout<<countOptimal(n);
    cout<<endl;

    return 0;
}