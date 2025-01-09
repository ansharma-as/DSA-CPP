#include <iostream>
#include <bitset>
using namespace std;

void explain_SetBits(){
    int n=7;
    int cnt= __builtin_popcount(n);
    cout << cnt << endl;
    cout << __builtin_popcount(402)   << endl;

    cout << "Binary representation of 7: " << bitset<8>(7) << endl;
}
int main(){
    explain_SetBits();
    return 0;
}