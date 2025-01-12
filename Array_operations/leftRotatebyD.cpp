#include <iostream>
using namespace std;

void lRotate1(int arr[], int n){
    int temp=arr[0];
    for(int i=1;i<n ; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void lRotateD(int arr[], int n, int d){
    for(int i=0;i<d;i++){
        lRotate1(arr,n);
    }
}



/////////////////////////////////////////////////////////////////////////////////////////////////
void Better(int arr[], int n, int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////
void optimal(int arr[], int n, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
void reverse(int arr[], int start, int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    int n,d;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of rotations: ";
    cin>>d;
    lRotateD(arr,n,d);
    cout<<"Array after left rotation by "<<d<<": ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}