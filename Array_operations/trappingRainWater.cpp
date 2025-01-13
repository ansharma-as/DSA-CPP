#include <iostream>
#include<vector>
using namespace std;

int trap_Naive(vector<int> &arr, int n){
    int res=0;
    for(int i=1 ;i<n-1 ; i++){
        int lmax=arr[i];
        for(int j=0; j<i ; j++){
            lmax= max(lmax, arr[j]);
        }
        int rmax=arr[i];
        for(int j=i+1; j<n;j++){
            rmax=max(rmax, arr[j]);
        }
        res=res+(min(lmax, rmax)-arr[i]);
    }
    return res;
}

int trap_optimal(vector<int> &arr, int n){
    int res=0;
    int lmax[n]; int rmax[n];
    lmax[0]= arr[0];
    for(int i=1; i<n ; i++){
        lmax[i]= max(lmax[i-1], arr[i]);
    }
    rmax[n-1]= arr[n-1];
    for(int i=n-2; i>=0 ;i--){
        rmax[i]=max(rmax[i+1], arr[i]);
    }

    for(int i=1;i<n-1 ;i++){
        res = res + (min(lmax[i], rmax[i]) - arr[i]);
    }
    return res;
}

int  main(){
    cout<<"Enter size of array: ";
    int n;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter "<<n<<"array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"amount of water that can be stored is: "<<trap_Naive(arr, n);
    cout<<endl;
    cout<<"amount of water that can be stored is: "<<trap_optimal(arr, n);

    return 0;
}