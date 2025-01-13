#include <iostream>
using namespace std;

int maxsum(vector<int> &arr, int n, int k){
    int current=0;
    for(int i=0; i<k ; i++){
        current += arr[i];
    }
    int result=current;
    for(int i=k ; i<n ; i++){
        current = current + arr[i] - arr[i-k];
        result = max(result, current);

    }
    return result;

}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<<"Maximum sum of subarray of size k: "<<maxsum(arr,n,k)<<endl;
    return 0;
}