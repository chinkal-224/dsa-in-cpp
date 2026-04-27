#include<iostream>
int linearSearch(int *arr, int n, int x)
{
    
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;

}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int x=3;
    int result=linearSearch(arr,n,x);
    if(result==-1){
        std::cout<<"Element not found in the array";
    }
    else{
        std::cout<<"Element found at index: "<<result;
    }
    return 0;
}