#include <iostream>
#include <vector>
using namespace std;

int Largest( vector<int> &arr  ){
    
    int largest= arr[0];
    for(int i=0 ; i<arr.size() ; i++){
        if(arr[i] > largest){
            largest= arr[i];
        }
    }
    return largest;

};

int main(){
     int n;
     cout<< "Enter number of elements11:" ;
     cin>>n;

    vector<int> arr(n);
    cout<<"Enter "<<n<< " elements11: ";
    for(int i=0 ;i<n ; i++){
        cin>>arr[i];
    }

    // int x;
    // cout<<"Enter the Element to do Operation with: ";
    // cin>>x;

    // int pos;
    // cout<<"Enter the position to insert: ";
    // cin>>pos;
    
    int res=Largest(arr);

    cout<<"Updated Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        cout << "The largest element is: " << res << endl;

}
