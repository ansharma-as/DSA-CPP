#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        int didswap= 0;
        for(int j=0; j<i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didswap = 1;
            }
        }
        if(didswap==0){
            break;  
        }
    }
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    BubbleSort(arr, n); 
    return 0;

}