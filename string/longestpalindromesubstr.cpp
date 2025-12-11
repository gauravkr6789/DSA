#include <iostream>
#include <algorithm>
using namespace std;
bool isPalindrome(const string& s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}

string longest_Palindromic_Substr(string s)
{

    int maxlen = 0;
    int startIndex=0;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 1; j <= s.length(); j++)
        {
            if (isPalindrome(s, i, j)) {
                int len = j - i + 1;
                if (len > maxlen) {
                    maxlen = len;
                    startIndex = i;
                }
            }
        }
    }
    return s.substr(startIndex,maxlen);
}

int main()
{
    string str = "babad";
    string result = longest_Palindromic_Substr(str);
    cout << "max length of palindromic substr is : " << result;
}