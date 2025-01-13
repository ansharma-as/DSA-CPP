#include <iostream>
using namespace std;


//Double Pointer 2DArray
void DoublePointer(){
    int m=3 , n=2 ;
    int **arr = new int*[m];
    for(int i=0; i<m ; i++){
        arr[i]= new int[n];

    }
    for(int i=0; i<m ; i++){
        for(int j=0; j<n ; j++){
            arr[i][j]=10;
            cout<<arr[i][j]<<" ";
        }
    }
}


//Array of Pointers
void ArrayofPointer(){
    int m=3 , n=2;
    int *arr[m];
    for(int i=0; i<m ; i++){
        arr[i]= new int[n];
    }
    for(int i=0; i<m ; i++){
        for(int j=0; j<n ; j++){
            arr[i][j]=10;
            cout<<arr[i][j]<<" ";
        }
    }
}

//Array of Vectors
void ArrayofVectors(){
    int m=3, n=2;
    vector<int> arr[m];
    for(int i=0; i<m ; i++){
        for(int j=0; j<n ; j++){
            arr[i].push_back(10);
            cout<<arr[i][j]<<" ";
        }
    }
}


//vector of vectors
void VectorofVectors(){
    int m=3, n=2;
    vector<vector<int> > arr;
    vector<int> v;
    for(int i=0; i<m ; i++){
        for(int j=0; j<n ; j++){
            v.push_back(10);
        }
        arr.push_back(v);
    }
    for(int i=0; i<m ; i++){
        for(int j=0; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}


int main(){
    DoublePointer();
    cout<<endl;
    ArrayofPointer();
    cout<<endl;
    ArrayofVectors();
    cout<<endl;
    VectorofVectors();
    cout<<endl;
    return 0;
}