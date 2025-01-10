#include <iostream>
using namespace std;

int computingPower(int a, int b)
{
    int res = 1;
    for (int i = 0; i < b; i++)
    {
        res = res * a;
    }
    return res;
}

int optimal(int a, int b){
    if(b==0){
        return 1;
    }
    
    if(a%2==0){
        return optimal(a*a,b/2);
    }
    else{
        return a*optimal(a,b-1);
    }
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << a << " raised to the power " << b << " is " << computingPower(a, b) << endl;
    cout << a << " raised to the power " << b << " is " << optimal(a, b) << endl;
    return 0;
}