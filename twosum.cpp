#include<iostream>
#include<vector>
using namespace std;
#include <algorithm>

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
    vector<pair<int,int>> ans;

    // sort array
    sort(arr.begin(), arr.end());

    int i = 0;
    int j = n - 1;

    while(i < j)
    {
        int sum = arr[i] + arr[j];

        if(sum == target)
        {
            ans.push_back(make_pair(arr[i], arr[j]));
            i++;
            j--;
        }
        else if(sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    if(ans.size() == 0)
    {
        ans.push_back(make_pair(-1, -1));
    }

    return ans;
}
int main(){
    int n, target;
    cin>>n>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<pair<int,int>> ans = twoSum(arr, target, n);
    for(auto p : ans){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}