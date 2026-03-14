#include <iostream>
using namespace std;
void bubblesort(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    vector<int>arr={64,34,25,12,22,11,90};
    int n=arr.size();
    bubblesort(arr,n);
    cout<<"sorted array by bubble sort is "<<endl;
    for(int num :arr){
        cout<<num<<" ";
    }
    cout<<endl;
}