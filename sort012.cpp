#include <iostream>
using namespace std;

void sort012(int *arr, int n)
{
   int p = 0;
   int mid = 0;
   int q = n - 1;

   while(mid <= q){
      if(arr[mid] == 0){
         swap(arr[p], arr[mid]);
         p++;
         mid++;
      }
      else if(arr[mid] == 1){
         mid++;
      }
      else{
         swap(arr[mid], arr[q]);
         q--;
      }
   }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}