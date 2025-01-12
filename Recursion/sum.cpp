#include <iostream>
using namespace std;

int getSum(int n){
    if(n==0){
        return 0;

    }
    else {
        return n+getSum(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of first "<<n<<" natural numbers is "<<getSum(n)<<endl;
    return 0;
}

