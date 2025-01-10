#include <iostream>
using namespace std;

int lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            break;
        }
        res++;
    }
    return res;
}
//////////////////////////////////////////
// Euclidean Algorithm
int gcd(int a, int b){
    if(b==0){
        return a;

    }
    else{
        return gcd(b, a%b);
    }
}
int optimal(int a, int b){
    return (a*b)/gcd(a,b);
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;
    cout << "LCM of " << a << " and " << b << " is " << optimal(a, b) << endl;
    return 0;
}