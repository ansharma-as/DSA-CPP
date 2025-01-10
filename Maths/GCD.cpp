#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a , int b){
    int res= min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}

int euclidean(int a , int b){
    if(b==0){
        return a;
    
    }
    else{
        return euclidean(b,a%b);
    }
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<euclidean(a,b)<<endl;
    return 0;
}