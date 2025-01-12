#include <iostream>
using namespace std;

void leaders(int arr[], int n){
    for(int i=0; i<n; i++){
        bool flag=false;
        for(int j=i+1; j<n ; j++){
            if(arr[i]<=arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<arr[i]<<" ";
        }
    }

}

void optimal(int arr[], int n){
    int max=arr[n-1];
    cout<<max<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
            cout<<max<<" ";
        }
    }
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
    leaders(arr,n);
    cout<<endl;
    optimal(arr,n);
    return 0;
}