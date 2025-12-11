#include <iostream>
#include <stack>
#include <string>
using namespace std;


bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}


string postfixToInfix(const string& postfix) {
    stack<string> st;

    for (char ch : postfix) {
        if (isOperator(ch)) {
            
            string op2 = st.top(); st.pop();
            string op1 = st.top(); st.pop();

            string expr = "(" + op1 + ch + op2 + ")";
            st.push(expr);
        } else {
           
            st.push(string(1, ch));
        }
    }

    
    return st.top();
}

int main() {
    string postfix;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    string infix = postfixToInfix(postfix);
    cout << "Infix expression: " << infix << endl;

    return 0;
}
