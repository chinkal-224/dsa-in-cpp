#include <iostream>
using namespace std;
long countWaysToMakeChange(int *denominations, int n, int value)
{
    long dp[value + 1];
    for(int i = 0; i <= value; i++) {
        dp[i] = 0;
    }
    dp[0] = 1; 
    for(int i = 0; i < n; i++) {
        for(int j = denominations[i]; j <= value; j++) {
            dp[j] += dp[j - denominations[i]];
        }
    }
    return dp[value];
}
int main()
{
    int denominations[] = {1, 2, 3};
    int n = sizeof(denominations) / sizeof(denominations[0]);
    int value = 4;
    cout << "Number of ways to make change for " << value << " is: " << countWaysToMakeChange(denominations, n, value) << endl;
    return 0;
}