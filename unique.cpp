#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The unique element is: " << findUnique(arr, size) << endl;
    return 0;
}