#include <iostream>
using namespace std;

int Naive(int n){
    int fact = 1;
    for(int i=2; i<=n ; i++){
        fact = fact*i;
    }

    int count = 0;
    while(fact %10 ==0){
        count++;
        fact = fact/10;
    }
    return count;

}

int optimal(int n){
    int result =0;
    for (int i=5 ; i<=n ; i=i*5){
        result = result + n/i;

    }
    return result;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Number of trailing zeros in "<<n<<"! is "<<Naive(n)<<endl;
    cout<<"Number of trailing zeros in "<<n<<"! is "<<optimal(n)<<endl;
    return 0;
}