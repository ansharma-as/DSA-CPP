#include <iostream>
#include <stack>
#define r 4
#define c 4
using namespace std;

int LargestHistogram(int arr[] , int n){
    int res=0;
    for(int i=0 ; i<n ;i++){
        int curr=arr[i];
        for(int j=i-1 ;j>=0 ; j--){
            if(arr[j]>= arr[i]){
                curr = curr + arr[i];
            }
            else{
                break;
            }
        }
        for(int j=i+1 ; j<n ;j++){
            if(arr[j]>=arr[i]){
                curr += arr[i];
            }
            else{break;}
        }
        res=max(res, curr);
    }
    return res;
}

int maxAreawith1(int mat[r][c]){
    int res= LargestHistogram(mat[0],c);
    for(int i=1 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(mat[i][j]==1){
                mat[i][j] += mat[i-1][j];
            }
        }
        res=max(res, LargestHistogram(mat[i],c));
    }
    return res;
}

int main(){
    int mat[r][c] = {
        {0,1,1,0},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,0,0}
    };
    cout<<maxAreawith1(mat);

    return 0;
}