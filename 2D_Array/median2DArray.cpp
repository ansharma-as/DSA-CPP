#include<iostream>
#include<algorithm>
using namespace std;

int median(int arr[][3], int r, int c) {
    // Flatten the 2D array into a 1D array
    int n = r * c;
    int flatArr[n];
    int index = 0;

    // Copy the elements from the 2D array into the 1D array
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            flatArr[index++] = arr[i][j];
        }
    }

    // Sort the 1D array
    sort(flatArr, flatArr + n);

    // Calculate median
    if (n % 2 == 0) {
        return (flatArr[n / 2 - 1] + flatArr[n / 2]) / 2;
    } else {
        return flatArr[n / 2];
    }
}

int optimalArray(int arr[r][c]){
    
}
int main() {
    int arr[2][3] = {{1, 3, 5}, {2, 4, 6}};  // Example 2D array
    int r = 2, c = 3;

    int med = median(arr, r, c);
    cout << "Median is: " << med << endl;

    return 0;
}
