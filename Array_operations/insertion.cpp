#include <iostream>
#include <vector>
using namespace std;



int Insert(int arr[], int n , int x, int pos, int cap){
    if(n== cap){
        return n;
    }

    int index=pos-1;
    for(int i=n-1 ; i>=index ; i--){
        arr[i+1]=arr[i];
    }
    
    arr[index]=x;
    return n+1;
}

int main(){
      int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int cap;
    cout<< "Enter capacity: ";
    cin>>cap;
    int arr[cap];
    cout << "Enter " << n << " Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the Element to insert: ";
    cin >> x;

    int pos;
    cout << "Enter the position to insert: ";
    cin >> pos;

    n = Insert(arr, n, x, pos, cap);

    cout << "Updated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}
