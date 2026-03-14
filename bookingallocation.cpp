#include <iostream>
#include <vector>
using namespace std;

bool ispossible(vector<int> arr, int n, int m, int mid){
    int pagesum = 0;
    int studentcount = 1;

    for(int i = 0; i < n; i++){
        if(pagesum + arr[i] <= mid){
            pagesum += arr[i];
        } else {
            studentcount++;
            if(studentcount > m || arr[i] > mid){
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int bookingallocation(vector<int> arr, int n, int m){
    int s = 0;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;

    while(s <= e){
        int mid = s + (e - s) / 2;

        if(ispossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {10, 20, 30, 40};
    int n = arr.size();
    int m = 2;

    cout << bookingallocation(arr, n, m);
    return 0;
}