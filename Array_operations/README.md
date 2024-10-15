## Array Operations

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
    cout<<"Enter "<<n<< " Elements: ";
    for(int i=0 ;i<n ; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the Element to do Operation with: ";
    cin>>x;

    // int pos;
    // cout<<"Enter the position to insert: ";
    // cin>>pos;
    
    int res=function(params );

    cout<<"Updated Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

```