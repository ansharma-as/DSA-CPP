#include <iostream>
using namespace std;

void lRotate(int arr[], int n){
    int temp=arr[0];
    for(int i=1;i<n ; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    lRotate(arr,n);
    cout<<"Array after left rotation by 1: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}