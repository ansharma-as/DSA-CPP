#include <iostream>
using namespace std;

void insertion_sort(vector<int> &arr){
    for(int i=0; i<arr.size() ; i++){
        int j=i;
        while( j>0 && arr[j-1] > arr[j] ){
            int temp= arr[j];
            arr[j] = arr[j-1];
            arr[j-1] =temp;
            j--;
        }

    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    insertion_sort(arr);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}