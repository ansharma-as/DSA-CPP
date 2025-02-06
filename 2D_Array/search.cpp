#include <iostream>
using namespace std;
#define R 4
#define C 4

void search(int arr[R][C], int x){
    int i=0; 
    int j=C-1;
    while(i<R && j>=0){
        if(arr[i][j]==x){
            cout<<"Element found at "<<i<<" "<<j<<endl;
            return;
        }
        if(arr[i][j]>x){
            j--;
        }
        else{
            i++;
        }
    }
}

int main(){
    int arr[R][C] = {{10, 20, 30, 40},
                   {15, 25, 35, 45},
                   {20, 30, 40, 50},
                   {25, 35, 45, 55}};
    int x = 45;
    search(arr, x);
    cout<<endl;
    return 0;
}