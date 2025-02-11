#include <iostream>
#include <stack>

using namespace std;

void NG(vector<int> nums){
    for(int i=0; i<nums.size() ; i++){
        int j;
        for(j=i+1; j<nums.size(); j++){
            if(nums[j]>nums[i]){
                cout<<nums[j]<<" ";
                break;
            }
        }
        if(j==nums.size()) cout<<"-1"<< " ";
    }
}

vector<int> OptimalNG(vector<int> nums){
    int n=nums.size();
    stack<int> s;
    vector<int> v;
    for(int i=n; i>=0 ; i--){
        while(s.empty()==false && s.top()<=nums[i]){
            s.pop();
        }
        int ng;
        if(s.empty()) v.push_back(-1);
        else v.push_back(s.top());
        s.push(nums[i]);
    }
    reverse(v.begin() , v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return v;
};

int main(){
    int n;
    cout<<"Enter size of the Array: ";
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }

    NG(arr);
    cout<<endl;

    OptimalNG(arr);
    cout<<endl;

    return 0;

}