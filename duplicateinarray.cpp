#include <iostream>
using namespace std;
#include <vector>
int findDuplicate(vector<int> &arr) 
{
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << findDuplicate(arr);
    return 0;
}