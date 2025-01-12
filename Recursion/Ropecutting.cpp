#include <iostream>
using namespace std;

int maxpieces(int n , int a , int b , int c){
    if(n==0){
        return 0;

    }
    if(n<0) return -1;
    int res= max(max(maxpieces(n-a,a,b,c),maxpieces(n-b,a,b,c)),maxpieces(n-c,a,b,c));

    if(res==-1){
        return -1;
    }
    return res+1;

}

int main(){
    int n,a,b,c;
    cout<<"Enter the length of the rope: ";
    cin>>n;
    cout<<"Enter the three lengths: ";
    cin>>a>>b>>c;
    cout<<"Maximum pieces that can be cut are: "<<maxpieces(n,a,b,c)<<endl;
    return 0;
}