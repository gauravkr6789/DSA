#include <iostream>
#include <stack>
using namespace std;
bool checkParatheses(string s)
{
    int n = s.length();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (st.empty())
            {
                return false;
            }
            char top = st.top();
            if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
            {
                return true;
            }
            st.pop();
        }
    }
    return st.empty();
}
int main(){
    string input;
    cout << "Enter parentheses string: ";
    cin >> input;

    if(checkParatheses(input))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}