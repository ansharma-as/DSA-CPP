#include <iostream>
using namespace std;

void optimal(int arr[], int n){
    for(int i=1; i<n ; i++){
        if(arr[i]<arr[i-1]){
            cout<<"Array is not sorted"<<endl;
            return;
        }
    }
    cout<<"Array is sorted"<<endl;
}
void Naive(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[i]){
                cout<<"Array is not sorted"<<endl;
                return;
            }
        }
        
    }
    cout<<"Array is sorted"<<endl;
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
    optimal(arr,n);
    Naive(arr,n);

    return 0;
}