#include <iostream>
using namespace std;
#include <vector>
int maxarea(vector<int> &height){
    int maxwater=0;
    int leftpointer=0,rightpointer=height.size()-1;
    while(leftpointer<rightpointer){
        int width=rightpointer-leftpointer;
        int ht=min(height[leftpointer],height[rightpointer]);
        int area=width*ht;
        maxwater=max(maxwater,area);
        height[leftpointer]<height[rightpointer] ? leftpointer++ : rightpointer--;
    }
    return maxwater;
}
int main(){
    vector<int> heightt={1,8,6,2,5,4,8,3,7};
    cout<<"max water that can be contained is ";
    cout<<maxarea(heightt);
    return 0;

}