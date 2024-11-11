#include <iostream>
using namespace std;

int Delete(int arr[] , int n, int x){
    int i;
    

    for(i=0; i<n ; i++){
        if(arr[i]==x)break;
    }
    if(i == n ) return n;

    for(int j=i; j<n-1 ;j++){
        arr[j]=arr[j+1];
    }
    return n-1;
}

int main(){
    int n;
    cout<< "Enter number of elements11:" ;
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<< " elements11: ";
    for(int i=0 ;i<n ; i++){
        cin>>arr[i];
    }
    
    int x;
    cout<<"Enter the Element to delete: ";
    cin>>x;

    // int pos;
    // cout<<"Enter the position to insert: ";
    //cin>>pos;
    
    int newsize=Delete(arr , n ,x);

    cout<<"Updated Array: ";
    for(int i=0;i<newsize;i++){
        cout<<arr[i]<<" ";
    }
}