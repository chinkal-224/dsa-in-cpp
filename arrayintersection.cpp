#include<iostream>
#include<vector>
using namespace std;
vector<int>intersectionarray(vector<int>arr1,int n,vector<int>arr2,int m){
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
int main(){
    vector<int>arr1={1,2,2,3,4,5};
    vector<int>arr2={2,2,3,5,6};
    int n=arr1.size();
    int m=arr2.size();
    vector<int>ans=intersectionarray(arr1,n,arr2,m);
    cout<<"intersection of two arrays is "<<endl;
    for(int num : ans) {
        cout << num << " ";
    }
    cout << endl;
}
