#include <iostream>
using namespace std;

int sum(int n ){
    if(n==0){
        return 0;
    }
    else{
        return sum(n/10)+n%10;

    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of digits of "<<n<<" is "<<sum(n)<<endl;
    return 0;
}