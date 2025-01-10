#include <iostream>
using namespace std;

int power(int x, int n){
    int res=1;
    while(n>0){
        if(n%2 != 0){
            res = res * x;
        }
        x=x*x;
        n=n/2;
    }
    return res;

}

int main(){
    int x,n;
    cout<<"Enter the value of x and n: ";
    cin>>x>>n;
    cout<<x<<" raised to the power "<<n<<" is "<<power(x,n)<<endl;
    return 0;
}