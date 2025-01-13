#include <iostream>
using namespace std;

int maxProfit(int arr[], int n){
    int profit =0;
    for(int i=1; i<n ;i++){
        if(arr[i]>arr[i-1]){
            profit = profit + (arr[i]-arr[i-1]);
        }
    }
    return profit;
}

int main(){
    cout<<"enter size of array: ";
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

   
    cout<<"Maximum profit: "<<maxProfit(arr, n);
    cout<<endl;
    cout<<"Maximum profit: "<<Naive(arr, n);

    return 0;
}