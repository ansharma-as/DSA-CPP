#include <iostream>
using namespace std;

int BS_Iterative(int arr[], int n, int x){
    int low =0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            high = mid-1;
        }
        else{
            low= mid+1;
        }
    }
    return -1;
}

int BS_Resursive(int arr[], int low, int high, int x){
    if(low>high)return -1;
    int mid = (low+high)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        return BS_Resursive(arr, low, mid-1 , x);
    }
    else{
        return BS_Resursive(arr,mid+1, high , x);
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 50;
    cout<<BS_Iterative(arr,n,x);

    cout<<endl;

    int low = 0;
    int high = n-1;
    cout<<BS_Resursive(arr,low,high,x);

    return 0;
}