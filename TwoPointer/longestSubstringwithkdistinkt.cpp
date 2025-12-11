#include <iostream>
#include <vector>
using namespace std;
int count_Of_Distinct_Element(vector<int> &vis)
{
    int count = 0;
    for (int i = 0; i < vis.size(); i++)
    {
        if (vis[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int length_Of_Substr_K_Distinct(string s, int k)
{
    vector<int> vis(26, 0);
    int n = s.length();
    int left = 0;
    int right = 0;
    int maxlen = 0;

    while (right < n)
    {
        vis[s[right] - 'a']++;
        int count = count_Of_Distinct_Element(vis);
        if (count > k)
        {
            while (vis[right] > 0)
            {
                vis.pop_back();
                left++;
            }
        }
        maxlen = max(maxlen, right - left + 1);
        right++;
    }
    return maxlen;
}