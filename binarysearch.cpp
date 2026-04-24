#include <vector>
#include <iostream>
using namespace std;
int search(vector<int> &nums, int target) {
    int s = 0;
    int e = nums.size() - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    return -1;
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;

    int result = search(nums, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}