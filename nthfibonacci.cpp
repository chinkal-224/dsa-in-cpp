#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Edge cases
    if(n == 1 || n == 2)
    {
        cout << 1;
        return 0;
    }

    int a = 1, b = 1, c;

    for(int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b;

    return 0;
}