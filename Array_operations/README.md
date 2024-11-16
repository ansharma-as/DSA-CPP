## Array operations11

- use this template here

```c++

#include <iostream>
using namespace std;

int function( params ){

};

int main(){
    int n;
    cout<< "Enter number of elements:" ;
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<< " elements: ";
    for(int i=0 ;i<n ; i++){
        cin>>arr[i];
    }
    
    int res=function(params );

    cout<<"Updated Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

```