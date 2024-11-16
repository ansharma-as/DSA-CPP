// #include <iostream>
// using namespace std;

// int RotateBy1(int arr[]  , int n){
//     int temp= arr[0];
//     for(int i=1; i<n ; i++){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1]=temp;
// }


// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Rotate the array by 1 position
//     RotateBy1(arr, n);

//     // Output the rotated array
//     cout << "Array after rotation by 1: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;

int RotateBy1(vector<int> &arr) {
    int temp = arr[0]; // Store the first element
    for (int i = 1; i < arr.size(); i++) {
        arr[i - 1] = arr[i]; // Shift elements to the left
    }
    arr[arr.size() - 1] = temp; // Place the first element at the end
    return 0;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n); // Use vector for dynamic array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Rotate the array by 1 position
    RotateBy1(arr);

    // Output the rotated array
    cout << "Array after rotation by 1: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
