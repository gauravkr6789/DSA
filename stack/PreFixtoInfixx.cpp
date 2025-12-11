#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

string preToInfix(const string& s) {
    stack<string> st;
    int n = s.length();
    for (int i = n - 1; i >= 0; i--) {
        if (isOperator(s[i])) {
            if (st.size() < 2) {
                cerr << "Invalid expression\n";
                return "";
            }
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            string exp = "(" + op1 + s[i] + op2 + ")";
            st.push(exp);
        } else {
            st.push(string(1, s[i]));
        }
    }
    if (!st.empty()) {
        return st.top();
    } else {
        return "";
    }
}

int main() {
    string s = "-AB";
    string result = preToInfix(s);
    if (!result.empty()) {
        cout << "Infix expression: " << result << endl;
    }
    return 0;
}
