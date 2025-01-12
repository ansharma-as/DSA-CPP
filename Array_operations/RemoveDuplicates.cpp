#include <iostream>
using namespace std;

int removeDup(int arr[], int n){
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1 ; i<n ; i++){
        if(temp[res-1] != arr[i]){
            temp[res]=arr[i];
            res++;
        }

    }
    for(int i=0 ;i<res ; i++){
        arr[i]= temp[i];

    }
    return res;

}

int optimal(int arr[] , int n){
    int res=1;
    for(int i=1 ; i<n ; i++){
        if(arr[res-1] != arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}


int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    n=optimal(arr,n);

    cout<<"Updated Array: ";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}