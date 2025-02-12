#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i*i<=n ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int naive(int n){
    for(int i=2 ;i <n ;i++){
        if(isPrime (i)){
            int x = i;
            while(n%x==0){
                cout<<i<<" ";
                x = x*i;
            }
        }
    }
}

int optimal(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2 ; i*i<=n ; i++){
        while(n%i==0){
            cout<<i<<" ";
            n = n/i;
        }
    }
    if(n>1){
        cout<<n;
    }
}


int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    
    cout<<"Prime factors of "<<(n)<<" are: ";
    //naive(n);
    optimal(n);
    return 0;
}