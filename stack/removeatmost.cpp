#include <iostream>
#include <string>
using namespace std;

void removeOutermost(string s)
{
    string result = "";
    int count = 0; 

    for (char ch : s)
    {
        if (ch == '(')
        {
            if (count > 0) // not outermost
                result += ch;
            count++;
        }
        else if (ch == ')')
        {
            count--;
            if (count > 0) // not outermost
                result += ch;
        }
    }

    cout << result << endl;
}

int main()
{
    string str = "(((())))";
    removeOutermost(str);
    return 0;
}
