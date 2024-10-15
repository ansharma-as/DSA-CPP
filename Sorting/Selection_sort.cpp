#include <iostream>
using namespace std;

void Selection_sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) 
                mini = j;
        }
        // Swap the minimum element with the first element
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Call the selection sort function
    Selection_sort(arr, n);
    
    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
