#include <iostream>
using namespace std;

void KthBith(int n , int k){
    int x= (1<<(k-1));
    if((n&x)!=0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

void KthBith2(int n , int k){
    int x= (n>>(k-1));
    if((x&1)==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

int main(){

    int n=5;
    int k=3;
    KthBith(n,k);
    KthBith2(n,k);


    return 0;
}