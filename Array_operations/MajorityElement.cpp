#include <iostream>
using namespace std;

int MajorityElement(int arr[], int n){
    int count = 1;
    for(int i=0 ; i<n ;i++){
        for (int  j=i+1; j< n ; j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
        }
        if(count> n/2){
            return i;
        }
    }
    return -1;
}

int optimal(int arr[], int n){
    int res=0;
    int count =1;
    for (int i = 0; i < n; i++)
    {
        if(arr[res]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    count =0 ; 
    for (int i = 0; i < n; i++)
    {
        if(arr[res]==arr[i]){
            count++;
        }
    }
    if(count<=n/2){
        res= -1;
    }
    return res;
    
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
    cout<<"Majority Element: "<<MajorityElement(arr,n)<<endl;
    cout<<"Majority Element: "<<optimal(arr,n)<<endl;
    return 0;
}