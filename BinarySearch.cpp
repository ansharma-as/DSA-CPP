#include <iostream>
using namespace std;

void BinarySearch(int arr[], int n, int key){
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"Element found at index: "<<mid;
            return;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"Element not found";

}

int main(){
    int n,key;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>key;
    BinarySearch(arr,n,key);
    return 0;
}