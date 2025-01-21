#include <iostream>
using namespace std;

void MoveZeros(vector<int> &arr , int n){
    int j= -1;
    for(int i=0 ;i<n ; i++){
        if( arr[i] == 0){
            j=i;
            break;
        }
    }

    if(j==-1) return;

    for( int i=j+1 ; i<n ; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

void Naive(int arr[], int n){
    for (int i=0 ; i<n ; i++){
        if(arr[i]==0){
            for(int j =i+1; j<n ;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
}

void Naive2(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        for(int j=n-1 ; j>=i ; j--){
            if(arr[j]==0){
                swap(arr[i],arr[j]);
            }
        }
    }
}


void optimal(int arr[],int n){
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    vector<int> arr(n); // Using vector for dynamic array
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Move zeros to the end of the array
    MoveZeros(arr, n);

    // Print the result
    cout << "Result is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}