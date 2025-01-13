#include <iostream>
using namespace std;

void countFrequencies(int arr[], int n) {
    int i = 0;
    while (i < n) {
        int count = 1; // At least one occurrence of the current element
        while (i + 1 < n && arr[i] == arr[i + 1]) { // Count duplicates
            count++;
            i++;
        }
        cout << arr[i] << " occurs " << count << " times." << endl;
        i++; // Move to the next distinct element
    }
}

void Naive(int arr[], int n){
    int freq=1;
    int i=0;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" occurs "<<freq<<" times."<<endl;
        i++;
        freq=1;

    }
    if( n==1 || arr[n-1] != arr[n-2]){
        cout<<arr[n-1]<<" occurs 1 time."<<endl;
    }

}
int main() {
    int arr[] = {10, 10, 20, 20, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    countFrequencies(arr, n);

    return 0;
}
