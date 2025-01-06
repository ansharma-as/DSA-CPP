#include <iostream>
using namespace std;

int Search(vector<int> &arr , int n, int num){
    for(int i=0 ; i<n  ; i++ ){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}


int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    cout<<"Enter digit to find: ";
    int num;
    cin>> num;

    vector<int> arr(n); // Using vector for dynamic array
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }    

    // Print the result
    cout << "Result is: "<< Search(arr, n , num) << endl;
    

    
}