#include <iostream>
#include <string>
#include <stack>
using namespace std;
int priority(char &s)
{

    if (s == '^')
    {
        return 3;
    }
    else if (s == '*' || s == '/')
    {
        return 2;
    }
    else if (s == '+' || s == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

string infixToPostfix(string &s)
{
    string ans = "";
    stack<char> st;
    int n = s.length();
    int i = 0;
    while (i < n)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop(); // Pop '('
            }
        }
        else
        {
            while (!st.empty() && priority(s[i]) <= priority(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}
int main()
{
    string s = "a+b*(c^d-e)^(f+g*h)-i";
    string result = infixToPostfix(s);
    cout << result;
    /*cout<<"before conversion string is : "<<s;
    cout<<endl;
    cout<<"After conversion string is : "<<result;*/
}