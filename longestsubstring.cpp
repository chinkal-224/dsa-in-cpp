#include <iostream>
#include <unordered_set>
using namespace std;

int uniqueSubstrings(string input)
{
    unordered_set<char> s;
    int left = 0, right = 0;
    int maxLen = 0;

    while (right < input.length()) {
        if (s.find(input[right]) == s.end()) {
            s.insert(input[right]);
            maxLen = max(maxLen, right - left + 1);
            right++;
        } else {
            s.erase(input[left]);
            left++;
        }
    }

    return maxLen;
}