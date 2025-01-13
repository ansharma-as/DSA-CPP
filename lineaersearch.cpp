#include <iostream>
using namespace std;

void search(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            cout<<"Element found at index: "<<i;
            return;
        }
    }
    cout<<"Element not found";
}

int main(){
    int n,x;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>x;
    search(arr,n,x);
    return 0;
}