#include <iostream>
using namespace std;

int findodd(int arr[], int n){
    int res=0;
    for(int i=0; i<n ; i++){
        res=res ^ arr[i];

    }
    return res;
}

int findODDNaive(int arr[] , int n){
    for(int i=0 ; i < n ;i++){
        int count=0;
        for(int j=0; j<n ; j++){
            if(arr[i]==arr[j]){
                count++;
            }

        }
        if(count%2!=0){
            return arr[i];
        }

    }
    return -1;
}

int main(){

    int n=5;
    int arr[]={4,3,4,4,4};
    cout<<findodd(arr,n);
    cout<<endl;
    cout<<findODDNaive(arr,n);
    cout<<endl;

    return 0;
}  