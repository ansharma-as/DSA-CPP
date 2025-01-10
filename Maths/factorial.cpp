#include <iostream>
using namespace std;

int iterative_factorial(int n){
    int result =1;
    for(int i=2; i<=n ; i++){
        result = result * i ;

    }
    return result;

}

int recursive_factorial(int n){
    if(n==0){
        return 1;
    }
    return n * recursive_factorial(n-1);
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<iterative_factorial(n)<<endl;
    cout<<"Factorial of "<<n<<" is "<<recursive_factorial(n)<<endl;
}