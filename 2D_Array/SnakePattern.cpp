#include <iostream>
using namespace std;

#define R 4
#define C 4
void print(int arr[R][C]){
    for(int i=0 ; i<R ; i++){
        if(i%2==0){
            for(int j=0; j<C ; j++){
                cout<< arr[i][j]<<" ";
            }
        }
        else{
            for(int j=C-1; j>=0 ;j--){
                cout<< arr[i][j]<<" ";
            }
        }
    }
}

int main(){
    int arr[R][C] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    print(arr);
    cout<<endl;
    return 0;
}