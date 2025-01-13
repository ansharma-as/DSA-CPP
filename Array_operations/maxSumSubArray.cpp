#include<iostream>
using namespace std;

int maxSum(vector<int> &arr, int n){
    int res=0;
    for(int i=0; i<n ; i++){
        int curr=0;
        for(int j=i ; j<n ;j++){
            curr=curr+arr[j];
            res=max(res,curr);
        }
    }
    return res;
}

int optimal(vector<int> &arr, int n){
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=1; i<n ; i++){
        maxEnding=max(maxEnding+arr[i], arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}


int main(){
    cout<<"Enter size of array: ";
    int n;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter "<<n<<" array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Maximum sum of subarray is: "<<maxSum(arr, n);
    cout<<endl;
    cout<<"Maximum sum of subarray is: "<<optimal(arr, n);

    return 0;
}