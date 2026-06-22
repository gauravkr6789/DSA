#include <iostream>
using namespace std;

bool validPassword(string s)
{
    if (s.length() < 6 || s.length() > 20)
        return false;

    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;

    int consecutiveCount = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i])) hasLower = true;
        if (isupper(s[i])) hasUpper = true;
        if (isdigit(s[i])) hasDigit = true;

        // Check 3 consecutive
        if (i > 0 && s[i] == s[i - 1])
        {
            consecutiveCount++;
            if (consecutiveCount == 3)
                return false;
        }
        else
        {
            consecutiveCount = 1;
        }
    }

    return hasLower && hasUpper && hasDigit;
}

int main()
{
    string s = "aa3Aaa1";

    if (validPassword(s))
        cout << "password valid";
    else
        cout << "password invalid";
}
