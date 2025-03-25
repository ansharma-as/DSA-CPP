#include <iostream>
using namespace std;

int firstOccuranceIndex_Naive(int arr[], int n , int x){
    for(int i=0 ;i <n ; i++){
        if(arr[i]== x){
            return i;
        }
    }
    return -1;
}

int firstOccuranceIndex_Recursive(int arr[], int low, int high , int x){
    if(low>high) return -1;
    int mid = (low+high)/2;

    if(arr[mid]<x){
        return firstOccuranceIndex_Recursive(arr, mid+1, high,x);
    }
    else if(arr[mid]>x){
        return firstOccuranceIndex_Recursive(arr, low, mid-1, x);
    }
    else{
        if(mid==0 || arr[mid-1]!=arr[mid]){
            return mid;
        }
        else{
            return firstOccuranceIndex_Recursive(arr, low, mid-1, x);
        }
    }
}

int firstOccuranceIndex_Iterative(int arr[], int n , int x){
    int low=0;
    int high= n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<x){
            low = mid+1;
        }
        else if(arr[mid]>x){
            high = mid-1;
        }
        else{
            if(mid==0 || arr[mid-1]!= arr[mid]){
                return mid;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,20,20,30,40,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 40;
    cout<<firstOccuranceIndex_Naive(arr,n,x)<<endl;
    cout<<firstOccuranceIndex_Recursive(arr,0,n-1,x)<<endl;
    cout<<firstOccuranceIndex_Iterative(arr,n,x)<<endl;

    return 0;
}