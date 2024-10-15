#include <iostream>
using namespace std;

int Search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  // Return the index where the element is found
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int n, x;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare the array after knowing the value of n
    int arr[n];

    // Input the array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to search
    cout << "Enter the element to search: ";
    cin >> x;

    // Search for the element and display the result
    int result = Search(arr, n, x);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
