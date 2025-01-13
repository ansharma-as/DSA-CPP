#include <iostream>
using namespace std;

int Naive(int arr[], int n){
    int res=0;
    for(int i=0; i<n; i++){
        int curr=0;
        for(int j=i; j<n ; j++){
            if(arr[j]==1){
                curr++;
                
            }
            else{
                break;
            }

        }
        res= max(res,curr);
    }
    return res;
}

int optimal(int arr[], int n){
    int res=0; 
    int curr=0;
    for(int i=0; i<n ; i++){
        if(arr[i]==0){
            curr=0;
        }
        else{
            curr++;
            res=max(res, curr);
        }

    }
    return res;
}

int main(){
    int arr[]={0,1,1,0,1,1,1,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Naive(arr,n);
    cout<<endl;
    cout<<optimal(arr,n);
    return 0;
}