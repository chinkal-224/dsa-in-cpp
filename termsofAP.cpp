#include<iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int count = 0;   // kitne numbers print ho gaye
    int n = 1;       // N starts from 1

    while(count < x) {
        int term = 3 * n + 2;

        if(term % 4 != 0) {   // not multiple of 4
            cout << term << " ";
            count++;
        }

        n++;
    }

    return 0;
}