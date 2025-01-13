#include <iostream>
using namespace std;

//Naive
int maxEvenOdd(int arr[], int n){
    int res=0;
    for(int i=0; i<n ; i++){
        int curr=1;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]%2!=0 && arr[j]%2==0 || arr[j]%2==0 && arr[j]%2!=0){
                curr++;
            }
            else{
                break;
            }
        }
        res= max(res,curr);
    }
    return res;

}

int optimal(int arr[], int n){
    int res=1;
    int curr=1;
    for(int i=1; i<n ; i++){
        if(arr[i]%2!=0 && arr[i-1]%2==0 || arr[i]%2==0 && arr[i-1]%2!=0){
            curr++;
            res=max(res,curr);
        }
        else{
            break;
        }

    }
    return res;
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
    cout<<"Maximum length of even odd subarray: "<<maxEvenOdd(arr,n)<<endl;
    cout<<"Maximum length of even odd subarray: "<<optimal(arr,n)<<endl;
    return 0;
}