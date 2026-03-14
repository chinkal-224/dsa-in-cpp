#include <iostream>
#include <vector>
using namespace std;
void insertionsort(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];

            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    vector<int>arr={12,11,13,5,6};
    int n=arr.size();
    insertionsort(arr,n);
    cout<<"sorted array by insertion sort is "<<endl;
    for(int num :arr){
        cout<<num<<" ";
    }
    cout<<endl;
}