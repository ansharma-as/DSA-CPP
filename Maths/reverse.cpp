#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int reversed=0;
    bool isNegative = ( x<0 );
    x= abs(x);

    while(x>0){
        int lastdigit = x%10;
        reversed = reversed*10+lastdigit;
        x=x/10;
        

    }
    if (isNegative) {
        return -reversed;
    } else {
        return reversed;
    }
}
int main(){
    int x;
    cout<<"enter a no:";
    cin>>x;

    int ans = reverse(x);

    cout<<"Reversed number:"<<ans;

};