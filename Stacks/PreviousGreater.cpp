#include <iostream>
#include<stack>
using namespace std;

void PreviuosGreater(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        int j;
        for(j=i-1; j>=0 ;j--){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }

        }
        if(j==-1){
            cout<<-1<<" ";
        }
    }
}

void Optimal(int arr[] , int n){
    stack<int> s;
    s.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1 ; i<n ; i++){
        while(!s.empty() && arr[i]>=s.top()){
            s.pop();
        }
        int pg;
        if(s.empty()){
            pg=-1;
        }
        else{
            pg=s.top();
        }
        cout<<pg<<" ";
        s.push(arr[i]);
    }
}


int main(){
    int arr[]={20,30,10,5,15};
    int n=5;

    PreviuosGreater(arr,n);
    cout<<endl;
    Optimal(arr, n );
    return 0;
}