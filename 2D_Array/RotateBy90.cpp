#include <iostream>
using namespace std;

#define n 4

void Rotate90(int arr[n][n]){
    int temp[n][n];
    for(int i=0; i<n; i++){
        for(int j=0 ; j< n ; j++){
            temp[n-j-1][i] = arr[i][j];
        }
    }
    for(int i =0 ; i<n ; i++){
        for(int j =0 ; j< n ; j++){
            arr[i][j] = temp[i][j];
        }
    }

}


void optimal(int arr[n][n]){
    for(int i=0 ; i< n ; i++){
        for(int j=i+1 ; j< n ; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i=0 ; i< n ; i++){
        int low=0, high = n-1;
        while(low< high){
            swap(arr[low][i], arr[high][i]);
            low++;
            high--;
        }
    }
}

int main() {
    int arr[n][n] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix After Naive 90-Degree Rotation:" << endl;
    Rotate90(arr);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Reset the array to the original for optimal rotation testing
    int arr2[n][n] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "\nMatrix After Optimal 90-Degree Rotation:" << endl;
    optimal(arr2);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
