#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int low=0;
    int high=n-1;
    while(high>low){
        int temp= arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        //same as swap(arr[low],arr[high]); 
        //have same time complexity
        low++;
        high--;
    }

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
    reverse(arr,n);

    cout<<"Updated Array: ";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}