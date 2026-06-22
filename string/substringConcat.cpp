#include <iostream>
#include <vector>
using namespace std;

bool allZeros(vector<int> &counter)
{
    for (int x : counter)
        if (x != 0)
            return false;
    return true;
}


vector<int> indexOfConcatSubstr(string s, vector<string> words)
{
    vector<int> ans;
    // concat word
    string concatword = " ";
    for (int i = 0; i < words.size(); i++)
    {
        concatword += words[i];
    }
    // store the count of each char in vector

    vector<int> freq(26, 0);
    for (int i = 0; i < concatword.length(); i++)
    {
        freq[concatword[i] - 'a']++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j <= concatword.length(); j++)
        {
            freq[concatword[j] - 'a']--;

            if (allZeros(freq))
            {
                ans.push_back(j);
            }
        }
    }

    return ans;
}

int main()
{
    string str = "barfoothefoobarman";
    vector<string> words = {"bar", "foo"};
    vector<int> result = indexOfConcatSubstr(str, words);
    cout << "[";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << "]";
}
