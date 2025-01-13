#include <iostream>
using namespace std;

int maxDiff(int arr[], int n){
    int result= arr[1]-arr[0];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            result=max(result,arr[j]-arr[i]);
        }
    }
    return result;
}
int optimal(int arr[], int n){
    int result =arr[1]-arr[0]; int minval=arr[0];
    for(int i=1;i<n;i++){
        result=max(result,arr[i]-minval);
        minval=min(minval,arr[i]);
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum difference between two elements of the array: "<<maxDiff(arr,n);
    cout<<endl;
    cout<<"Maximum difference between two elements of the array: "<<optimal(arr,n);
    return 0;
}