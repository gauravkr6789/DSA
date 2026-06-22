#include <iostream>
#include <unordered_map>
using namespace std;

bool Atleast_K_RepChar(string s, int k)
{
    unordered_map<char, int> freq;
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }

    for (auto &i : freq)
    {
        if (i.second < k)
        {
            return false;
        }
    }

    return true;
}

int longestSubstring(string s, int k)
{
    if (s.length() == 0)
        return 0;

    unordered_map<char, int> freq;
    for (char c : s)
        freq[c]++;

    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i]] < k)
        {
            int left = longestSubstring(s.substr(0, i), k);
            int right = longestSubstring(s.substr(i + 1), k);
            return max(left, right);
        }
    }

    return s.length();
}
int main()
{
    string s = "aaabb";
    int k = 2;
    int ans = longestSubstring(s, k);
    cout << "ans:" << ans;
}