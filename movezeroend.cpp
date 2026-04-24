#include <iostream>
using namespace std;    
void pushZeroesEnd(int *input, int size)
{
    int j = 0;

    for(int i = 0; i < size; i++)
    {
        if(input[i] != 0)
        {
            swap(input[i], input[j]);
            j++;
        }
    }
}
int main() {
    int size;
    cin >> size;
    int *input = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> input[i];
    }
    pushZeroesEnd(input, size);
    for(int i = 0; i < size; i++) {
        cout << input[i] << " ";
    }
    delete[] input;
    return 0;
}