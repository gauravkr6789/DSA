#include <iostream>
#include <climits>
#include <unordered_map>
using namespace std;

string minWindow(string s, string target)
{
    int stringlen = s.length();
    int targetlen = target.length();

    if (targetlen > stringlen) return "";

    unordered_map<char, int> map;
    for (char ch : target)
    {
        map[ch]++;
    }

    int left = 0, right = 0;
    int requireCount = targetlen;
    int startingIndex = 0;
    int minWindowSize = INT_MAX;

    while (right < stringlen)
    {
        char ch = s[right];
        if (map[ch] > 0)
        {
            requireCount--;
        }
        map[ch]--;

        while (requireCount == 0)
        {
            int currWindow = right - left + 1;
            if (minWindowSize > currWindow)
            {
                minWindowSize = currWindow;
                startingIndex = left;
            }

            map[s[left]]++;
            if (map[s[left]] > 0)
            {
                requireCount++;   // ✅ FIX: increase count back
            }
            left++;
        }
        right++;
    }

    return (minWindowSize == INT_MAX) ? "" : s.substr(startingIndex, minWindowSize);
}

int main()
{
    string str = "ADOBECODEBANC";
    string tar = "ABC";
    string result = minWindow(str, tar);
    cout << "Minimum substring containing all characters: " << result << endl;
}

