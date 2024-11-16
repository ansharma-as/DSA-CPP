#include <iostream>
using namespace std;

int RotateByD( int arr[] , int d , int n){
    reverse(arr , arr+d);
    reverse(arr+d , arr+n);
    reverse(arr , arr+n);
}

void reverse(int arr[] , int start , int end){
    while(start <= end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

int main(){ 
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int d;
    cout<< "Enter Rotation Digit: ";
    cin>>d;

    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    RotateByD(arr , n ,d);

    cout<< "Result: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }



    

    return 0;
}