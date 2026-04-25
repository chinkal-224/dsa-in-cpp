#include<iostream>
#include<vector>
using namespace std;
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n=arr.size();
    vector<int> ans;
    for(int i=k;i<n;i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<k;i++){
        ans.push_back(arr[i]);
    }
    return ans;
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    int k=2;
    vector<int> ans=rotateArray(arr,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
