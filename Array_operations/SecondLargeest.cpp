#include <iostream>
using namespace std;

int SecondLargst(int a[] , int n){
    
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    cout<<"Sum of all elements: "<<sum<<endl;

    return 0;
}