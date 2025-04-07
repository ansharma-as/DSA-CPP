#include <iostream>
using namespace std;

int LastoccuranceNaive(int arr[], int n , int x ){
    int low = arr[0];
    int high= arr[n-1];
    for(int i=n-1; i>=0 ;i ++){
        if(arr[i]==x){
            return i;
        }
    }
}

int LastOccuranceOptimalRecursive(int arr[], int low, int high , int n , int x){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]<x){
        return LastOccuranceOptimalRecursive(arr,mid+1 , high , n ,x );
    }
    else if(arr[mid]>x){
        return LastOccuranceOptimalRecursive(arr,low,mid-1, n ,x);
    }
    else{
        if(mid == n-1 || arr[mid]!= arr[mid+1]){
            return mid;
        }
        else{
            return LastOccuranceOptimalRecursive(arr, mid+1 , high , n ,x);
        }
    }
}

int 