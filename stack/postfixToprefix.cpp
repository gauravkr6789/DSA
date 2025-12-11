#include <iostream>
#include <stack>
#include <string>
using namespace std;


bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}


string postfixToprefix(const string& postfix) {
    stack<string> st;

    for (char ch : postfix) {
        if (isOperator(ch)) {
            
            string op2 = st.top(); st.pop();
            string op1 = st.top(); st.pop();

            string expr = ch+op2+op1;
            st.push(expr);
        } else {
           
            st.push(string(1, ch));
        }
    }

    
    return st.top();
}

int main() {
    string s="AB+";
    string result=postfixToprefix(s);
    cout<<result;
    
}
