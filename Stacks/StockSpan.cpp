#include <iostream>
#include <stack>
using namespace std;

void StockSpanNaive(vector<int> &arr){
    int n=arr.size();
    for(int i=0 ; i <n; i++){
        int span=1;
        for(int j=i-1; j>=0 && arr[j]<=arr[i] ; j--){
            //if(arr[j]>arr[i]) break;
            span++;

        }
        cout<<span<<" ";
    }
}

void OptimalSpan(vector<int> &arr){
    int n=arr.size();
    stack<int> s;
    s.push(0);
    cout<<"1"<<" ";
    for(int i=1; i<n ; i++){
        while(s.empty()==false && arr[s.top()]<= arr[i]){
            s.pop();
        }
        int span;
        if(s.empty()){
            span=i+1;
        }
        else{
            span=i-s.top();
        }
        cout<<span<<" ";
        s.push(i);
    }

}

void practiceSpan(vector<int> arr){
    stack<int> s;
    s.push(arr[0]);
    for(int i=0 ; i<arr.size()  ; i++){
        while(!s.empty() && arr[s.top()]<=arr[i]){
            s.pop();
        }
        int span = s.empty() ? i+1 : i-s.top();
        cout<<span<<" ";
        s.push(i);
    }
}

int main(){
    int n;  
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }

    StockSpanNaive(arr);
    cout<<endl;
    OptimalSpan(arr);
    cout<<endl;
    practiceSpan(arr);

    cout<<endl;
    return 0;
}