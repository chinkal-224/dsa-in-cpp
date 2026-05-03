#include <iostream>
using namespace std;
void intersection(int *input1, int *input2, int size1, int size2)
{
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(input1[i]==input2[j]){
                cout<<input1[i]<<" ";
                input2[j] = -1; 
                break; 
            }
        }
    }
}
int main()
{
    int input1[] = {1, 2, 3, 4, 5};
    int input2[] = {3, 4, 5, 6, 7};
    int size1 = sizeof(input1) / sizeof(input1[0]);
    int size2 = sizeof(input2) / sizeof(input2[0]);
    cout << "Intersection of the two arrays is: ";
    intersection(input1, input2, size1, size2);
    return 0;
}