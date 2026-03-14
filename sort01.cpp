#include<iostream>
#include<vector>
using namespace std;
void printarray(vector<int>arr){
    for(int num:arr){
        cout<<num<<" ";
    }
}
vector<int>sort01(vector<int>arr){
    int left=0;
    int right=arr.size()-1;
    while(left<right){
        if(arr[left]==0){
            left++;
        }
        else if(arr [right]==1){
            right--;
        }else if(arr[left]==1 && arr[right]==0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    return arr;
}
int main(){
    vector<int>arr={0,1,0,0,0,1,1,0,1,0,1};
    vector<int>ans=sort01(arr);
    cout<<"sorted array of 0s and 1s is "<<endl;
    printarray(ans);
    return 0;
    
}