#include <iostream>
using namespace std;
#define n 4

// Naive approach: Transpose the matrix using a temporary array.
void Naive(int arr[n][n]) {
    int temp[n][n];

    // Copy original array to the temp array with transposition.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[j][i] = arr[i][j];
        }
    }

    // Copy the temp array back to the original array.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = temp[i][j];
        }
    }
}

// Optimal approach: Transpose the matrix in place.
void optimal(int arr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

// Print the matrix.
void printMatrix(int arr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(arr);

    cout << "\nNaive Transpose:" << endl;
    Naive(arr);
    printMatrix(arr);

    cout << "\nOptimal Transpose:" << endl;
    optimal(arr);
    printMatrix(arr);

    return 0;
}
