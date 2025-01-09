#include <iostream>
using namespace std;

void explain_sort(){
    int arr[] = {1, 2, 3, 4, 5};
    sort(arr, arr+5);
    for(int i=0 ; i<5 ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    explain_sort();
    return 0;
}