#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int priority(char op) {
    if (op == '^') return 3;
    else if (op == '*' || op == '/') return 2;
    else if (op == '+' || op == '-') return 1;
    else return 0;
}

string infixToPrefix(string s) {
    
    reverse(s.begin(), s.end());

   
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') s[i] = ')';
        else if (s[i] == ')') s[i] = '(';
    }

   
    stack<char> st;
    string result = "";

    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];

        
        if (isalnum(ch)) {
            result += ch;
        }
        
        else if (ch == '(') {
            st.push(ch);
        }
       
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); 
        }
        
        else {
            while (!st.empty() && priority(ch) < priority(st.top())) {
                result += st.top();
                st.pop();
            }
            
            while (!st.empty() && priority(ch) == priority(st.top()) && ch != '^') {
                result += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string s = "a+b*(c^d-e)^(f+g*h)-i";
    string result = infixToPrefix(s);

    cout << "Before conversion string is: " << s << endl;
    cout << "After conversion to Prefix is: " << result << endl;

    return 0;
}
